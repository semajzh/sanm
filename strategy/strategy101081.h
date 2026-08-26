#ifndef STRATEGY101081_H
#define STRATEGY101081_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy101081 : public Strategy
{
public:
    Strategy101081();
    virtual ~Strategy101081();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101081_H
