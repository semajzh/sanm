#ifndef STRATEGY101091_H
#define STRATEGY101091_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101091 : public Strategy
{
public:
    Strategy101091();
    virtual ~Strategy101091();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101091_H
