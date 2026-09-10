#ifndef STRATEGY001840_H
#define STRATEGY001840_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001840 : public Strategy
{
public:
    Strategy001840();
    virtual ~Strategy001840();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001840_H
