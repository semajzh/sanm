#ifndef STRATEGY001540_H
#define STRATEGY001540_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001540 : public Strategy
{
public:
    Strategy001540();
    virtual ~Strategy001540();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001540_H
