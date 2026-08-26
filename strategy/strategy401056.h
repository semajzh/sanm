#ifndef STRATEGY401056_H
#define STRATEGY401056_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401056 : public Strategy
{
public:
    Strategy401056();
    virtual ~Strategy401056();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401056_H
