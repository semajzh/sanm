#ifndef STRATEGY102011_H
#define STRATEGY102011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy102011 : public Strategy
{
public:
    Strategy102011();
    virtual ~Strategy102011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY102011_H
