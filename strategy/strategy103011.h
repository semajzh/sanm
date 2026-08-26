#ifndef STRATEGY103011_H
#define STRATEGY103011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy103011 : public Strategy
{
public:
    Strategy103011();
    virtual ~Strategy103011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY103011_H
