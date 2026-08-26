#ifndef STRATEGY401061_H
#define STRATEGY401061_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401061 : public Strategy
{
public:
    Strategy401061();
    virtual ~Strategy401061();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401061_H
