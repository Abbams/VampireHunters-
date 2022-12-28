 #include "play_widget.h"

play_widget::play_widget(QWidget *parent)
    : QWidget{parent}
{
    this->show();
    this->setHidden(1);
    this->setFixedSize(fix_widget_size);
    this->move(init_widget_point);
    tims=new QTimer(this);
    tims->start(1000);
    connect(tims,&QTimer::timeout,this,&play_widget::make_barry);
    play_back_img= new QLabel(this);
    QPixmap back_img_2(":/ob/img/paly_backimg.jpg");
    play_back_img->setPixmap(back_img_2);
    play_back_img->setAlignment(Qt::AlignTop);
    myhero=new hero(this);



}
void play_widget::make_barry()
{
    barrage *p=new barrage(this);
    ob_v.push_back(p);
    qDebug()<<ob_v.size()<<'\n';


}
