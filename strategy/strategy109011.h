#ifndef STRATEGY109011_H
#define STRATEGY109011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy109011 : public Strategy
{
public:
    Strategy109011();
    virtual ~Strategy109011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY109011_H
