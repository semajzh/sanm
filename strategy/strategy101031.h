#ifndef STRATEGY101031_H
#define STRATEGY101031_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101031 : public Strategy
{
public:
    Strategy101031();
    virtual ~Strategy101031();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101031_H
