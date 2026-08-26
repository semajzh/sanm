#ifndef STRATEGY201081_H
#define STRATEGY201081_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201081 : public Strategy
{
public:
    Strategy201081();
    virtual ~Strategy201081();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201081_H
