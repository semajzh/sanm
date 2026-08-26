#ifndef STRATEGY402021_H
#define STRATEGY402021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy402021 : public Strategy
{
public:
    Strategy402021();
    virtual ~Strategy402021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY402021_H
