#ifndef STRATEGY301011_H
#define STRATEGY301011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy301011 : public Strategy
{
public:
    Strategy301011();
    virtual ~Strategy301011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301011_H
