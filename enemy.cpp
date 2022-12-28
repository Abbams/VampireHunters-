#include "enemy.h"

enemy::enemy(QWidget *parent)
    : move_object{parent}
{
    pos_={1,1};
    speed=10;
    image=new QLabel("enemy");

//    image->setPixmap();


}
void enemy::move()
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
