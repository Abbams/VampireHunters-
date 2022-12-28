#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<play_widget.h>
#include <QWidget>
#include<QDebug>
#include<QPixmap>
#include<QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    play_widget* playw;
    bool palying;
    void close_Mainwindow_Show_Playwidget();
    void show_Mainwindow_Close_Playwidget();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
