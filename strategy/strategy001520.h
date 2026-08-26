#ifndef STRATEGY001520_H
#define STRATEGY001520_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001520 : public Strategy
{
public:
    Strategy001520();
    virtual ~Strategy001520();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001520_H
