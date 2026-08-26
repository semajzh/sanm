#ifndef STRATEGY404021_H
#define STRATEGY404021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy404021 : public Strategy
{
public:
    Strategy404021();
    virtual ~Strategy404021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY404021_H
