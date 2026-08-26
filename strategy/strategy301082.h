#ifndef STRATEGY301082_H
#define STRATEGY301082_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301082 : public Strategy
{
public:
    Strategy301082();
    virtual ~Strategy301082();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301082_H
