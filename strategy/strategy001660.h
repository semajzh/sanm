#ifndef STRATEGY001660_H
#define STRATEGY001660_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001660 : public Strategy
{
public:
    Strategy001660();
    virtual ~Strategy001660();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001660_H
