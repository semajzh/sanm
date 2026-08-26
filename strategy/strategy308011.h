#ifndef STRATEGY308011_H
#define STRATEGY308011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy308011 : public Strategy
{
public:
    Strategy308011();
    virtual ~Strategy308011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY308011_H
