#ifndef STRATEGY105011_H
#define STRATEGY105011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy105011 : public Strategy
{
public:
    Strategy105011();
    virtual ~Strategy105011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY105011_H
