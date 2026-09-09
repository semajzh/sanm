#ifndef STRATEGY301052_H
#define STRATEGY301052_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy301052 : public Strategy
{
public:
    Strategy301052();
    virtual ~Strategy301052();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301052_H
