#ifndef STRATEGY401051_H
#define STRATEGY401051_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401051 : public Strategy
{
public:
    Strategy401051();
    virtual ~Strategy401051();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401051_H
