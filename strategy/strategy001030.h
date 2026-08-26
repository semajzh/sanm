#ifndef STRATEGY001030_H
#define STRATEGY001030_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001030 : public Strategy
{
public:
    Strategy001030();
    virtual ~Strategy001030();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001030_H
