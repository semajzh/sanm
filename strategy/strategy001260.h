#ifndef STRATEGY001260_H
#define STRATEGY001260_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001260 : public Strategy
{
public:
    Strategy001260();
    virtual ~Strategy001260();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001260_H
