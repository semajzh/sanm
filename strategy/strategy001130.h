#ifndef STRATEGY001130_H
#define STRATEGY001130_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001130 : public Strategy
{
public:
    Strategy001130();
    virtual ~Strategy001130();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001130_H
