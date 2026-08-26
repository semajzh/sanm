#ifndef STRATEGY401021_H
#define STRATEGY401021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401021 : public Strategy
{
public:
    Strategy401021();
    virtual ~Strategy401021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401021_H
