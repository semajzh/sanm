#ifndef STRATEGY403012_H
#define STRATEGY403012_H
#include "strategy.h"

class Ground;
class Item;
class Strategy403012 : public Strategy
{
public:
    Strategy403012();
    virtual ~Strategy403012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY403012_H
