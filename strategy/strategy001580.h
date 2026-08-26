#ifndef STRATEGY001580_H
#define STRATEGY001580_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001580 : public Strategy
{
public:
    Strategy001580();
    virtual ~Strategy001580();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001580_H
