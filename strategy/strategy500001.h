#ifndef STRATEGY500001_H
#define STRATEGY500001_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500001 : public Strategy
{
public:
    Strategy500001();
    virtual ~Strategy500001();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500001_H
