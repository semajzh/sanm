#ifndef STRATEGY401052_H
#define STRATEGY401052_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401052 : public Strategy
{
public:
    Strategy401052();
    virtual ~Strategy401052();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401052_H
