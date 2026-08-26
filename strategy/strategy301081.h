#ifndef STRATEGY301081_H
#define STRATEGY301081_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301081 : public Strategy
{
public:
    Strategy301081();
    virtual ~Strategy301081();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301081_H
