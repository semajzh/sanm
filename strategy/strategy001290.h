#ifndef STRATEGY001290_H
#define STRATEGY001290_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001290 : public Strategy
{
public:
    Strategy001290();
    virtual ~Strategy001290();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001290_H
