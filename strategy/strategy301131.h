#ifndef STRATEGY301131_H
#define STRATEGY301131_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301131 : public Strategy
{
public:
    Strategy301131();
    virtual ~Strategy301131();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301131_H
