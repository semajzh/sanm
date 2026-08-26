#ifndef STRATEGY413011_H
#define STRATEGY413011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy413011 : public Strategy
{
public:
    Strategy413011();
    virtual ~Strategy413011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY413011_H
