#ifndef PLAY_WIDGET_H
#define PLAY_WIDGET_H
#include <QWidget>
#include <enemy.h>
#include <hero.h>
#include <barrage.h>
#include <qvector.h>
class play_widget : public QWidget
{
    Q_OBJECT
    QLabel *play_back_img;
    QTimer *tims;
    QVector <move_object*>ob_v;
    hero * myhero;
public:
    explicit play_widget(QWidget *parent = nullptr);
    void make_barry();
signals:
};

#endif // PLAY_WIDGET_H
