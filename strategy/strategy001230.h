#ifndef STRATEGY001230_H
#define STRATEGY001230_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001230 : public Strategy
{
public:
    Strategy001230();
    virtual ~Strategy001230();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001230_H
