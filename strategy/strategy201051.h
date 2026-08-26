#ifndef STRATEGY201051_H
#define STRATEGY201051_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201051 : public Strategy
{
public:
    Strategy201051();
    virtual ~Strategy201051();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201051_H
