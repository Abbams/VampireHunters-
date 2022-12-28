#include "move_object.h"

move_object::move_object(QWidget *parent)
    : QObject{parent}
{
    times=new QTimer(this);

}
