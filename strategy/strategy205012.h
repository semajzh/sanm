#ifndef STRATEGY205012_H
#define STRATEGY205012_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy205012 : public Strategy
{
public:
    Strategy205012();
    virtual ~Strategy205012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY205012_H
