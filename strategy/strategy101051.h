#ifndef STRATEGY101051_H
#define STRATEGY101051_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101051 : public Strategy
{
public:
    Strategy101051();
    virtual ~Strategy101051();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101051_H
