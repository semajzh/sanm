#ifndef STRATEGY202022_H
#define STRATEGY202022_H
#include "strategy.h"

class Ground;
class Item;
class Strategy202022 : public Strategy
{
public:
    Strategy202022();
    virtual ~Strategy202022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY202022_H
