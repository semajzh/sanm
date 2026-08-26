#ifndef STRATEGY101011_H
#define STRATEGY101011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101011 : public Strategy
{
public:
    Strategy101011();
    virtual ~Strategy101011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101011_H
