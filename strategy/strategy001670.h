#ifndef STRATEGY001670_H
#define STRATEGY001670_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001670 : public Strategy
{
public:
    Strategy001670();
    virtual ~Strategy001670();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001670_H
