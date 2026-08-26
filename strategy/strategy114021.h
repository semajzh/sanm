#ifndef STRATEGY114021_H
#define STRATEGY114021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy114021 : public Strategy
{
public:
    Strategy114021();
    virtual ~Strategy114021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY114021_H
