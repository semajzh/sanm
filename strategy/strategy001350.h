#ifndef STRATEGY001350_H
#define STRATEGY001350_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001350 : public Strategy
{
public:
    Strategy001350();
    virtual ~Strategy001350();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001350_H
