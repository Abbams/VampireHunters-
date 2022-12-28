#ifndef MOVE_OBJECT_H
#define MOVE_OBJECT_H

#include <QObject>
#include <QPoint>
#include <QSize>
#include<Const_val.h>
#include<QLabel>
#include<QDebug>
#include<qtimer.h>
#include<math.h>
class move_object : public QObject
{
    Q_OBJECT
protected:
    QPoint pos_;//位置
    QSize siz_;//尺寸
    QPoint max_pos;//最远点
    qint16 speed;//移动速度
    QLabel *image;//对象形状
    QTimer *times;//计时器
public:
    explicit move_object(QWidget *parent = nullptr);
    virtual void move()=0;
signals:

};

#endif // MOVE_OBJECT_H
