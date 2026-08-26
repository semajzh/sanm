#ifndef STRATEGY202021_H
#define STRATEGY202021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy202021 : public Strategy
{
public:
    Strategy202021();
    virtual ~Strategy202021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY202021_H
