#ifndef STRATEGY001810_H
#define STRATEGY001810_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001810 : public Strategy
{
public:
    Strategy001810();
    virtual ~Strategy001810();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001810_H
