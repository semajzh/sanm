#ifndef STRATEGY401091_H
#define STRATEGY401091_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401091 : public Strategy
{
public:
    Strategy401091();
    virtual ~Strategy401091();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401091_H
