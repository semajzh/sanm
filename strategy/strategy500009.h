#ifndef STRATEGY500009_H
#define STRATEGY500009_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500009 : public Strategy
{
public:
    Strategy500009();
    virtual ~Strategy500009();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500009_H
