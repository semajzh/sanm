#ifndef STRATEGY401031_H
#define STRATEGY401031_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401031 : public Strategy
{
public:
    Strategy401031();
    virtual ~Strategy401031();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401031_H
