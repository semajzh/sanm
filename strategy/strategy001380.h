#ifndef STRATEGY001380_H
#define STRATEGY001380_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001380 : public Strategy
{
public:
    Strategy001380();
    virtual ~Strategy001380();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001380_H
