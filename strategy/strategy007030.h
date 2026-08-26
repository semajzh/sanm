#ifndef STRATEGY007030_H
#define STRATEGY007030_H
#include "strategy.h"

class Ground;
class Item;
class Strategy007030 : public Strategy
{
public:
    Strategy007030();
    virtual ~Strategy007030();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY007030_H
