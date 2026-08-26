#ifndef STRATEGY001190_H
#define STRATEGY001190_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001190 : public Strategy
{
public:
    Strategy001190();
    virtual ~Strategy001190();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001190_H
