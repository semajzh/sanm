#ifndef STRATEGY500005_H
#define STRATEGY500005_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500005 : public Strategy
{
public:
    Strategy500005();
    virtual ~Strategy500005();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500005_H
