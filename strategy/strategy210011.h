#ifndef STRATEGY210011_H
#define STRATEGY210011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy210011 : public Strategy
{
public:
    Strategy210011();
    virtual ~Strategy210011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY210011_H
