#ifndef STRATEGY001400_H
#define STRATEGY001400_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001400 : public Strategy
{
public:
    Strategy001400();
    virtual ~Strategy001400();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001400_H
