#ifndef STRATEGY411011_H
#define STRATEGY411011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy411011 : public Strategy
{
public:
    Strategy411011();
    virtual ~Strategy411011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY411011_H
