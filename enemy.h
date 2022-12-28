#ifndef ENEMY_H
#define ENEMY_H

#include "move_object.h"
//敌人
class enemy : public move_object
{
public:
    explicit enemy(QWidget *parent = nullptr);
    virtual void move();
};

#endif // ENEMY_H
