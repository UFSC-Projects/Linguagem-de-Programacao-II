#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtMultimediaWidgets>
#include <QtCore>
#include <QtWidgets>
#include <QtGui>
#include <QFileDialog>
#include <QStyle>

QT_BEGIN_NAMESPACE
namespace Ui {
class MediaPlayer;
}
QT_END_NAMESPACE

class MediaPlayer : public QMainWindow
{
    Q_OBJECT

public:
    MediaPlayer(QWidget *parent = nullptr);
    ~MediaPlayer();

private slots:
    void durationChanged(qint64 duration);
    void positionChanged(qint64 duration);
    void on_actionOpen_File_triggered();
    void on_pushButton_Play_Pause_clicked();
    void on_pushButton_Stop_clicked();
    void on_pushButton_Volume_clicked();
    void on_horizontalSlider_Volume_valueChanged(int value);
    void on_pushButton_Seek_Backward_clicked();
    void on_pushButton_Seek_Forward_clicked();
    void on_horizontalSlider_Duration_sliderMoved(int position);
    void on_pushButton_FullScreen_NormalScreen_clicked();

private:
    Ui::MediaPlayer *ui;
    QMediaPlayer *Player;
    QAudioOutput *AudioOutput;
    QVideoWidget *video;
    qint64 mDuration;
    bool IS_Pause = true;
    bool IS_Muted = false;
    void UpdateDuration(qint64 Duration);
};
#endif // MEDIAPLAYER_H
