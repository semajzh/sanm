#ifndef STRATEGY203011_H
#define STRATEGY203011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy203011 : public Strategy
{
public:
    Strategy203011();
    virtual ~Strategy203011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY203011_H
