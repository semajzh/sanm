#ifndef STRATEGY305011_H
#define STRATEGY305011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy305011 : public Strategy
{
public:
    Strategy305011();
    virtual ~Strategy305011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY305011_H
