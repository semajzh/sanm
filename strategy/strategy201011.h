#ifndef STRATEGY201011_H
#define STRATEGY201011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201011 : public Strategy
{
public:
    Strategy201011();
    virtual ~Strategy201011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201011_H
