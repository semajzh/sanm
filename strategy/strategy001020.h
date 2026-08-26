#ifndef STRATEGY001020_H
#define STRATEGY001020_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001020 : public Strategy
{
public:
    Strategy001020();
    virtual ~Strategy001020();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001020_H
