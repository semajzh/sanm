#ifndef STRATEGY001440_H
#define STRATEGY001440_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001440 : public Strategy
{
public:
    Strategy001440();
    virtual ~Strategy001440();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001440_H
