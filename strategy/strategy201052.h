#ifndef STRATEGY201052_H
#define STRATEGY201052_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201052 : public Strategy
{
public:
    Strategy201052();
    virtual ~Strategy201052();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201052_H
