#ifndef STRATEGY001610_H
#define STRATEGY001610_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001610 : public Strategy
{
public:
    Strategy001610();
    virtual ~Strategy001610();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001610_H
