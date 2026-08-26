#ifndef STRATEGY001100_H
#define STRATEGY001100_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001100 : public Strategy
{
public:
    Strategy001100();
    virtual ~Strategy001100();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001100_H
