#ifndef STRATEGY104011_H
#define STRATEGY104011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy104011 : public Strategy
{
public:
    Strategy104011();
    virtual ~Strategy104011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY104011_H
