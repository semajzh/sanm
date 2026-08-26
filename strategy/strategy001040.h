#ifndef STRATEGY001040_H
#define STRATEGY001040_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001040 : public Strategy
{
public:
    Strategy001040();
    virtual ~Strategy001040();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001040_H
