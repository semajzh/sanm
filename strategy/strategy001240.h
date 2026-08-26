#ifndef STRATEGY001240_H
#define STRATEGY001240_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001240 : public Strategy
{
public:
    Strategy001240();
    virtual ~Strategy001240();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001240_H
