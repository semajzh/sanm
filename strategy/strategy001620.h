#ifndef STRATEGY001620_H
#define STRATEGY001620_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001620 : public Strategy
{
public:
    Strategy001620();
    virtual ~Strategy001620();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001620_H
