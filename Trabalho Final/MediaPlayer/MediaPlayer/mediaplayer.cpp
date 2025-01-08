#include "mediaplayer.h"
#include "ui_mediaplayer.h"

MediaPlayer::MediaPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MediaPlayer)
{
    ui->setupUi(this);

    Player = new QMediaPlayer(this);
    AudioOutput = new QAudioOutput(this);

    ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_Seek_Backward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    QIcon iconVolume(":/new/prefix1/images/volume_icon.png");
    ui->pushButton_Volume->setIcon(iconVolume);
    QIcon iconScreen(":/new/prefix1/images/maximize_icon.png");
    ui->pushButton_FullScreen_NormalScreen->setIcon(iconScreen);



    connect(Player, &QMediaPlayer::durationChanged, this, &MediaPlayer::durationChanged);
    connect(Player, &QMediaPlayer::positionChanged, this, &MediaPlayer::positionChanged);

    ui->horizontalSlider_Duration->setRange(0, Player->duration() / 1000);

}

MediaPlayer::~MediaPlayer()
{
    delete ui;
}

void MediaPlayer::durationChanged(qint64 duration)
{
    mDuration = duration / 1000;
    ui->horizontalSlider_Duration->setMaximum(mDuration);
}

void MediaPlayer::positionChanged(qint64 duration)
{
    if (!ui->horizontalSlider_Duration->isSliderDown())
    {
        ui->horizontalSlider_Duration->setValue(duration / 1000);
    }
    UpdateDuration(duration / 1000);
}

void MediaPlayer::UpdateDuration(qint64 Duration)
{
    QTime CurrentTime((Duration / 3600) % 60, (Duration / 60) % 60, Duration % 60, (Duration * 1000) % 1000);
    QString Format = "hh:mm:ss";

    ui->label_Current_Time->setText(CurrentTime.toString(Format));
}

void MediaPlayer::on_actionOpen_File_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Select Media File"), "", tr("Media Files (*.mp4 *.mp3)"));

    if (!FileName.isEmpty()) {

        ui->label_Value_File_Name->setText(QFileInfo(FileName).fileName());

        Player->setSource(QUrl::fromLocalFile(FileName));

        AudioOutput->setVolume(ui->horizontalSlider_Volume->value() / 100.0f);

        Player->setAudioOutput(AudioOutput);

        if (ui->groupBox_Video->layout() != nullptr) {
            QLayout* oldLayout = ui->groupBox_Video->layout();
            QLayoutItem* item;
            while ((item = oldLayout->takeAt(0)) != nullptr) {
                if (item->widget()) {
                    item->widget()->setParent(nullptr);
                }
                delete item;
            }
            delete oldLayout;
        }

        if(QFileInfo(FileName).suffix().toLower() == "mp4")
        {

            video = new QVideoWidget(ui->groupBox_Video);
            Player->setVideoOutput(video);


            QVBoxLayout *layout = new QVBoxLayout();
            layout->addWidget(video);
            ui->groupBox_Video->setLayout(layout);

        }

        Player->play();
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }

}


void MediaPlayer::on_pushButton_Play_Pause_clicked()
{
    if(IS_Pause == true)
    {
        IS_Pause = false;
        Player->play();
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    }
    else
    {
        IS_Pause = true;
        Player->pause();
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
}


void MediaPlayer::on_pushButton_Stop_clicked()
{
    Player->stop();
    ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
}


void MediaPlayer::on_pushButton_Volume_clicked()
{
    if (IS_Muted == false)
    {
        IS_Muted = true;
        QIcon iconVolumeMute(":/new/prefix1/images/mute_icon.png");
        ui->pushButton_Volume->setIcon(iconVolumeMute);
        AudioOutput->setMuted(true);

    }
    else
    {
        IS_Muted = false;
        QIcon iconVolume(":/new/prefix1/images/volume_icon.png");
        ui->pushButton_Volume->setIcon(iconVolume);
        AudioOutput->setMuted(false);
    }
}

void MediaPlayer::on_horizontalSlider_Volume_valueChanged(int value)
{
    float volume = value / 100.0f;
    AudioOutput->setVolume(volume);
}


void MediaPlayer::on_pushButton_Seek_Backward_clicked()
{
    ui->horizontalSlider_Duration->setValue(ui->horizontalSlider_Duration->value() - 10);
    Player->setPosition(ui->horizontalSlider_Duration->value() * 1000);
}


void MediaPlayer::on_pushButton_Seek_Forward_clicked()
{
    ui->horizontalSlider_Duration->setValue(ui->horizontalSlider_Duration->value() + 10);
    Player->setPosition(ui->horizontalSlider_Duration->value() * 1000);
}


void MediaPlayer::on_horizontalSlider_Duration_sliderMoved(int position)
{
    qDebug() << position;
    Player->pause();
    Player->setPosition(position * 1000);
    Player->play();
}

void MediaPlayer::on_pushButton_FullScreen_NormalScreen_clicked()
{
    if (isFullScreen()) {
        showNormal();
    } else {
        showFullScreen();
    }
}

