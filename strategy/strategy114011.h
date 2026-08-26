#ifndef STRATEGY114011_H
#define STRATEGY114011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy114011 : public Strategy
{
public:
    Strategy114011();
    virtual ~Strategy114011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY114011_H
