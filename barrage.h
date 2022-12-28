#ifndef BARRAGE_H
#define BARRAGE_H

#include "move_object.h"

class barrage : public move_object
{
    QPoint dir;
public:
    explicit barrage(QWidget *parent = nullptr);
    virtual void move();
};

#endif // BARRAGE_H
