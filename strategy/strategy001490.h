#ifndef STRATEGY001490_H
#define STRATEGY001490_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001490 : public Strategy
{
public:
    Strategy001490();
    virtual ~Strategy001490();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001490_H
