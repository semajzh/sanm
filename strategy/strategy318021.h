#ifndef STRATEGY318021_H
#define STRATEGY318021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy318021 : public Strategy
{
public:
    Strategy318021();
    virtual ~Strategy318021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif
