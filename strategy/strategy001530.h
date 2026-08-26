#ifndef STRATEGY001530_H
#define STRATEGY001530_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001530 : public Strategy
{
public:
    Strategy001530();
    virtual ~Strategy001530();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001530_H
