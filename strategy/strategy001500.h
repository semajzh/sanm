#ifndef STRATEGY001500_H
#define STRATEGY001500_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001500 : public Strategy
{
public:
    Strategy001500();
    virtual ~Strategy001500();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001500_H
