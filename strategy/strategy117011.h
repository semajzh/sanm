#ifndef STRATEGY117011_H
#define STRATEGY117011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy117011 : public Strategy
{
public:
    Strategy117011();
    virtual ~Strategy117011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY117011_H
