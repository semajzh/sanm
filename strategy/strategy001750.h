#ifndef STRATEGY001750_H
#define STRATEGY001750_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001750 : public Strategy
{
public:
    Strategy001750();
    virtual ~Strategy001750();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001750_H
