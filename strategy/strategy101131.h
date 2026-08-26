#ifndef STRATEGY101131_H
#define STRATEGY101131_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101131 : public Strategy
{
public:
    Strategy101131();
    virtual ~Strategy101131();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101131_H
