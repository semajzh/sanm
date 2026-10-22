#ifndef STRATEGY401042_H
#define STRATEGY401042_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401042 : public Strategy
{
public:
    Strategy401042();
    virtual ~Strategy401042();
    virtual bool run(Ground* ground, Item* item1);
};

#endif
