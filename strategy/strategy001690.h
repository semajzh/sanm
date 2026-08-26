#ifndef STRATEGY001690_H
#define STRATEGY001690_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001690 : public Strategy
{
public:
    Strategy001690();
    virtual ~Strategy001690();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001690_H
