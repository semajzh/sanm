#ifndef STRATEGY001790_H
#define STRATEGY001790_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001790 : public Strategy
{
public:
    Strategy001790();
    virtual ~Strategy001790();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001790_H
