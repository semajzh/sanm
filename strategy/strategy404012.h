#ifndef STRATEGY404012_H
#define STRATEGY404012_H
#include "strategy.h"

class Ground;
class Item;
class Strategy404012 : public Strategy
{
public:
    Strategy404012();
    virtual ~Strategy404012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY404012_H
