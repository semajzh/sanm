#ifndef STRATEGY001760_H
#define STRATEGY001760_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001760 : public Strategy
{
public:
    Strategy001760();
    virtual ~Strategy001760();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001760_H
