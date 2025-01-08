/********************************************************************************
** Form generated from reading UI file 'mediaplayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAPLAYER_H
#define UI_MEDIAPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaPlayer
{
public:
    QAction *actionOpen_File;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_Value_File_Name;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_Video;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Current_Time;
    QSlider *horizontalSlider_Duration;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Seek_Backward;
    QPushButton *pushButton_Play_Pause;
    QPushButton *pushButton_Stop;
    QPushButton *pushButton_Seek_Forward;
    QPushButton *pushButton_FullScreen_NormalScreen;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Volume;
    QSlider *horizontalSlider_Volume;
    QMenuBar *menubar;
    QMenu *menuOpen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MediaPlayer)
    {
        if (MediaPlayer->objectName().isEmpty())
            MediaPlayer->setObjectName("MediaPlayer");
        MediaPlayer->resize(870, 585);
        actionOpen_File = new QAction(MediaPlayer);
        actionOpen_File->setObjectName("actionOpen_File");
        centralwidget = new QWidget(MediaPlayer);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        label_Value_File_Name = new QLabel(centralwidget);
        label_Value_File_Name->setObjectName("label_Value_File_Name");
        label_Value_File_Name->setFont(font);

        horizontalLayout_3->addWidget(label_Value_File_Name);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        groupBox_Video = new QGroupBox(centralwidget);
        groupBox_Video->setObjectName("groupBox_Video");
        groupBox_Video->setEnabled(true);
        groupBox_Video->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"	border: none;\n"
"}"));

        horizontalLayout_4->addWidget(groupBox_Video);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 10, -1, 10);
        label_Current_Time = new QLabel(centralwidget);
        label_Current_Time->setObjectName("label_Current_Time");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Current_Time->sizePolicy().hasHeightForWidth());
        label_Current_Time->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_Current_Time->setFont(font1);

        horizontalLayout_2->addWidget(label_Current_Time);

        horizontalSlider_Duration = new QSlider(centralwidget);
        horizontalSlider_Duration->setObjectName("horizontalSlider_Duration");
        horizontalSlider_Duration->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        horizontalSlider_Duration->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    height: 5px;  /* Altura do groove */\n"
"    background: #333333;  /* Cor de fundo mais escura */\n"
"    \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #ffffff;  /* Cor do manipulador do slider */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    width: 20px;  /* Largura do manipulador */\n"
"    margin: -2px -5px;  /* Ajuste de posi\303\247\303\243o */\n"
"    border-radius: 6px;  \n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #666666;  \n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #ffffff;  \n"
"}"));
        horizontalSlider_Duration->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_Duration);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton_Seek_Backward = new QPushButton(centralwidget);
        pushButton_Seek_Backward->setObjectName("pushButton_Seek_Backward");
        pushButton_Seek_Backward->setMinimumSize(QSize(40, 40));
        pushButton_Seek_Backward->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Seek_Backward->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_Seek_Backward);

        pushButton_Play_Pause = new QPushButton(centralwidget);
        pushButton_Play_Pause->setObjectName("pushButton_Play_Pause");
        pushButton_Play_Pause->setMinimumSize(QSize(40, 40));
        pushButton_Play_Pause->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Play_Pause->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_Play_Pause);

        pushButton_Stop = new QPushButton(centralwidget);
        pushButton_Stop->setObjectName("pushButton_Stop");
        pushButton_Stop->setMinimumSize(QSize(40, 40));
        pushButton_Stop->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Stop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_Stop);

        pushButton_Seek_Forward = new QPushButton(centralwidget);
        pushButton_Seek_Forward->setObjectName("pushButton_Seek_Forward");
        pushButton_Seek_Forward->setMinimumSize(QSize(40, 40));
        pushButton_Seek_Forward->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Seek_Forward->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_Seek_Forward);

        pushButton_FullScreen_NormalScreen = new QPushButton(centralwidget);
        pushButton_FullScreen_NormalScreen->setObjectName("pushButton_FullScreen_NormalScreen");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_FullScreen_NormalScreen->sizePolicy().hasHeightForWidth());
        pushButton_FullScreen_NormalScreen->setSizePolicy(sizePolicy2);
        pushButton_FullScreen_NormalScreen->setMinimumSize(QSize(40, 40));
        pushButton_FullScreen_NormalScreen->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_FullScreen_NormalScreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_FullScreen_NormalScreen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Volume = new QPushButton(centralwidget);
        pushButton_Volume->setObjectName("pushButton_Volume");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_Volume->sizePolicy().hasHeightForWidth());
        pushButton_Volume->setSizePolicy(sizePolicy3);
        pushButton_Volume->setMinimumSize(QSize(40, 40));
        pushButton_Volume->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Volume->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #ffffff;  /* Cor do texto branco */\n"
"    background-color: #444444;  /* Cor de fundo mais escura */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    margin: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #555555;  /* Cor de fundo mais escura ao passar o mouse */\n"
"}"));

        horizontalLayout->addWidget(pushButton_Volume);

        horizontalSlider_Volume = new QSlider(centralwidget);
        horizontalSlider_Volume->setObjectName("horizontalSlider_Volume");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(horizontalSlider_Volume->sizePolicy().hasHeightForWidth());
        horizontalSlider_Volume->setSizePolicy(sizePolicy4);
        horizontalSlider_Volume->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        horizontalSlider_Volume->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    height: 5px;  /* Altura do groove */\n"
"    background: #333333;  /* Cor de fundo mais escura */\n"
"    \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #ffffff;  /* Cor do manipulador do slider */\n"
"    border: 1px solid #666666;  /* Borda cinza */\n"
"    width: 20px;  /* Largura do manipulador */\n"
"    margin: -2px -5px;  /* Ajuste de posi\303\247\303\243o */\n"
"    border-radius: 6px;  \n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #666666;  \n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #ffffff;  \n"
"}"));
        horizontalSlider_Volume->setMaximum(100);
        horizontalSlider_Volume->setValue(50);
        horizontalSlider_Volume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_Volume);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 5);

        horizontalLayout_5->addLayout(verticalLayout);

        MediaPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MediaPlayer);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 870, 25));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        MediaPlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(MediaPlayer);
        statusbar->setObjectName("statusbar");
        MediaPlayer->setStatusBar(statusbar);

        menubar->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionOpen_File);

        retranslateUi(MediaPlayer);

        QMetaObject::connectSlotsByName(MediaPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *MediaPlayer)
    {
        MediaPlayer->setWindowTitle(QCoreApplication::translate("MediaPlayer", "MediaPlayer", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MediaPlayer", "Open File", nullptr));
        label->setText(QCoreApplication::translate("MediaPlayer", "File Name:", nullptr));
        label_Value_File_Name->setText(QString());
        groupBox_Video->setTitle(QString());
        label_Current_Time->setText(QCoreApplication::translate("MediaPlayer", "00:00:00", nullptr));
        pushButton_Seek_Backward->setText(QString());
        pushButton_Play_Pause->setText(QString());
        pushButton_Stop->setText(QString());
        pushButton_Seek_Forward->setText(QString());
        pushButton_FullScreen_NormalScreen->setText(QString());
        pushButton_Volume->setText(QString());
        menuOpen->setTitle(QCoreApplication::translate("MediaPlayer", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MediaPlayer: public Ui_MediaPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAPLAYER_H
