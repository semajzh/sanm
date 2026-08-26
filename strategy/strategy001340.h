#ifndef STRATEGY001340_H
#define STRATEGY001340_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001340 : public Strategy
{
public:
    Strategy001340();
    virtual ~Strategy001340();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001340_H
