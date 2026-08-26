#ifndef STRATEGY001120_H
#define STRATEGY001120_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001120 : public Strategy
{
public:
    Strategy001120();
    virtual ~Strategy001120();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001120_H
