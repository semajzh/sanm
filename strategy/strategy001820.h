#ifndef STRATEGY001820_H
#define STRATEGY001820_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001820 : public Strategy
{
public:
    Strategy001820();
    virtual ~Strategy001820();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001820_H
