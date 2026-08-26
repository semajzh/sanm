#ifndef STRATEGY001680_H
#define STRATEGY001680_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001680 : public Strategy
{
public:
    Strategy001680();
    virtual ~Strategy001680();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001680_H
