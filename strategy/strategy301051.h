#ifndef STRATEGY301051_H
#define STRATEGY301051_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301051 : public Strategy
{
public:
    Strategy301051();
    virtual ~Strategy301051();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301051_H
