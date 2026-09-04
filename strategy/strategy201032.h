#ifndef STRATEGY201032_H
#define STRATEGY201032_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201032 : public Strategy
{
public:
    Strategy201032();
    virtual ~Strategy201032();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201032_H
