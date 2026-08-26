#ifndef STRATEGY001160_H
#define STRATEGY001160_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001160 : public Strategy
{
public:
    Strategy001160();
    virtual ~Strategy001160();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001160_H
