#ifndef STRATEGY001430_H
#define STRATEGY001430_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001430 : public Strategy
{
public:
    Strategy001430();
    virtual ~Strategy001430();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001430_H
