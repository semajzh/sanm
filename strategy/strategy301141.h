#ifndef STRATEGY301141_H
#define STRATEGY301141_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301141 : public Strategy
{
public:
    Strategy301141();
    virtual ~Strategy301141();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301141_H
