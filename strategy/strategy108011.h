#ifndef STRATEGY108011_H
#define STRATEGY108011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy108011 : public Strategy
{
public:
    Strategy108011();
    virtual ~Strategy108011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY108011_H
