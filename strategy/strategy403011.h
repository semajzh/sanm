#ifndef STRATEGY403011_H
#define STRATEGY403011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy403011 : public Strategy
{
public:
    Strategy403011();
    virtual ~Strategy403011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY403011_H
