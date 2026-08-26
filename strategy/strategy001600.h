#ifndef STRATEGY001600_H
#define STRATEGY001600_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001600 : public Strategy
{
public:
    Strategy001600();
    virtual ~Strategy001600();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001600_H
