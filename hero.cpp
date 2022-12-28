#include "hero.h"

hero::hero(QWidget *parent)
    : move_object{parent}
{
    pos_=center_point;
    siz_=hero_size;
    max_pos=max_point;
    speed=hero_init_speed;
    image=new QLabel(parent);
    image->setPixmap((QPixmap)":/ob/img/hero.png");
    image->move(pos_);
//    times->start(1000);
//    connect(,&QTimer::timeout,[parent]()
//    {
//        barrage *bar=new barrage(parent);
//        bar->move();
//    });
}
void hero::move()
{
    qint16 move_x=0 ;
    qint16 move_y=0;
    if(pos_.x()<center_point.x())
    move_x=speed;
    else
    move_x=-speed;
    if(pos_.y()<center_point.y())
    move_y=speed;
    else
    move_y=-speed;
    pos_+={move_x,move_y};
}
void hero::make_barrage(QWidget *parent)
{

}
