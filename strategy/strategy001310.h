#ifndef STRATEGY001310_H
#define STRATEGY001310_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001310 : public Strategy
{
public:
    Strategy001310();
    virtual ~Strategy001310();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001310_H
