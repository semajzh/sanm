#ifndef STRATEGY301031_H
#define STRATEGY301031_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301031 : public Strategy
{
public:
    Strategy301031();
    virtual ~Strategy301031();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301031_H
