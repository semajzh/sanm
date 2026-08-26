#ifndef STRATEGY315011_H
#define STRATEGY315011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy315011 : public Strategy
{
public:
    Strategy315011();
    virtual ~Strategy315011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY315011_H
