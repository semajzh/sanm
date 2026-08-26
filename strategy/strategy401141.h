#ifndef STRATEGY401141_H
#define STRATEGY401141_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401141 : public Strategy
{
public:
    Strategy401141();
    virtual ~Strategy401141();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401141_H
