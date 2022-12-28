#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QPixmap back_img_1(":/Enter_ui/wallhaven-m3pk3y_1600x900.png");
    ui->back_img->setPixmap(back_img_1);

    setFixedSize(fix_widget_size);
    move(init_widget_point);

    playw=new play_widget;


//    enemy *p=new enemy(playw);

    QPushButton *paly_game=new QPushButton(this);//游戏开始按键
    QPushButton *exit_game=new QPushButton(playw);//游戏结束按键

    //初始化开始按键
    paly_game->move(init_playbutton_point);
    paly_game->setIcon(QIcon(":/ob/img/paly.png"));
    paly_game->setIconSize(playbutton_size);
    paly_game->resize(playbutton_size);
    paly_game->setStyleSheet("border:0px");
    connect(paly_game,&QPushButton::clicked,this,&MainWindow::close_Mainwindow_Show_Playwidget);
    //初始化退出按键
    exit_game->move(init_exitbutton_point);
    exit_game->setIcon(QIcon(":/ob/img/exit.png"));
    exit_game->setIconSize(exitbutton_size);
    exit_game->resize(exitbutton_size);
    exit_game->setStyleSheet("border:0px");
    connect(exit_game,&QPushButton::clicked,this,&MainWindow::show_Mainwindow_Close_Playwidget);
//    paly_game->setPixmap()
    //test
//    QTimer *t=new QTimer();
//    t->start(100);
//    t->start(2000);


//    connect(t,&QTimer::timeout,[=](){
//        qDebug()<<"产生一个弹幕\n";

//    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
//关闭主界面显示游戏界面
void MainWindow::close_Mainwindow_Show_Playwidget()
{
    this->setHidden(1);
    playw->move(this->pos());
    playw->setHidden(0);

}

//关闭游戏界面显示主界面
void MainWindow::show_Mainwindow_Close_Playwidget()
{
    this->setHidden(0);
    this->move(playw->pos());
    playw->setHidden(1);
}
