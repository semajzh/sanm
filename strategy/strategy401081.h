#ifndef STRATEGY401081_H
#define STRATEGY401081_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401081 : public Strategy
{
public:
    Strategy401081();
    virtual ~Strategy401081();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401081_H
