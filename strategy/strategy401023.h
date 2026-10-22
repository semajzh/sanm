#ifndef STRATEGY401023_H
#define STRATEGY401023_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401023 : public Strategy
{
public:
    Strategy401023();
    virtual ~Strategy401023();
    virtual bool run(Ground* ground, Item* item1);
};

#endif
