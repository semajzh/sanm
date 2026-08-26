#ifndef STRATEGY001070_H
#define STRATEGY001070_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001070 : public Strategy
{
public:
    Strategy001070();
    virtual ~Strategy001070();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001070_H
