#ifndef STRATEGY001060_H
#define STRATEGY001060_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001060 : public Strategy
{
public:
    Strategy001060();
    virtual ~Strategy001060();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001060_H
