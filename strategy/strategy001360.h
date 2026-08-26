#ifndef STRATEGY001360_H
#define STRATEGY001360_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001360 : public Strategy
{
public:
    Strategy001360();
    virtual ~Strategy001360();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001360_H
