#include "barrage.h"

barrage::barrage(QWidget *parent)
    : move_object{parent}
{
    pos_=center_point;
    speed=barrage_init_speed;
    dir=(QCursor().pos()-(this->pos_));
    int le=sqrt(dir.y()*dir.y()+dir.x()*dir.x());
    dir/=le/10;
    qDebug()<<dir.x()<<' '<<dir.y()<<'\n';
//    dir={1,1};
    times->start(100);
    image=new QLabel(parent);
     image->setPixmap((QPixmap)":/ob/img/barrage.png");
    void (barrage::*move_void)()=&barrage::move;
    connect(times,&QTimer::timeout,this,move_void);
}
void barrage::move()
{

    pos_+=dir;
    image->move(pos_);
//    if(pos_.x()>max_pos.x()||pos_.x()<0)
//    {
//        delete this;
//        qDebug()<<"delete\n";
//        return ;
//    }
//    if(pos_.y()>max_pos.y()||pos_.y()<0)
//    {
//        delete this;
//        qDebug()<<"delete\n";
//        return ;
//    }
//    qDebug()<<pos_.x()<<" "<<pos_.y()<<"\n";
}
