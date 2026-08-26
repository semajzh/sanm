#ifndef STRATEGY001510_H
#define STRATEGY001510_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001510 : public Strategy
{
public:
    Strategy001510();
    virtual ~Strategy001510();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001510_H
