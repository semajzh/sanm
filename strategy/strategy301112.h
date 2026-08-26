#ifndef STRATEGY301112_H
#define STRATEGY301112_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301112 : public Strategy
{
public:
    Strategy301112();
    virtual ~Strategy301112();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301112_H
