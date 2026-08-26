#ifndef STRATEGY001330_H
#define STRATEGY001330_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001330 : public Strategy
{
public:
    Strategy001330();
    virtual ~Strategy001330();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001330_H
