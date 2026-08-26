#ifndef STRATEGY001700_H
#define STRATEGY001700_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001700 : public Strategy
{
public:
    Strategy001700();
    virtual ~Strategy001700();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001700_H
