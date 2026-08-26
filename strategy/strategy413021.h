#ifndef STRATEGY413021_H
#define STRATEGY413021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy413021 : public Strategy
{
public:
    Strategy413021();
    virtual ~Strategy413021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY413021_H
