#ifndef STRATEGY001110_H
#define STRATEGY001110_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001110 : public Strategy
{
public:
    Strategy001110();
    virtual ~Strategy001110();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001110_H
