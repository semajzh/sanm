#ifndef STRATEGY001450_H
#define STRATEGY001450_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001450 : public Strategy
{
public:
    Strategy001450();
    virtual ~Strategy001450();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001450_H
