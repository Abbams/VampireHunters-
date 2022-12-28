#ifndef HERO_H
#define HERO_H

#include "move_object.h"
#include <barrage.h>
class hero : public move_object
{
public:
    explicit hero(QWidget *parent = nullptr);
    virtual void move();
    void make_barrage(QWidget *parent);
};

#endif // HERO_H
