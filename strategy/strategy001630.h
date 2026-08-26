#ifndef STRATEGY001630_H
#define STRATEGY001630_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001630 : public Strategy
{
public:
    Strategy001630();
    virtual ~Strategy001630();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001630_H
