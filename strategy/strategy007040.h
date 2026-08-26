#ifndef STRATEGY007040_H
#define STRATEGY007040_H
#include "strategy.h"

class Ground;
class Item;
class Strategy007040 : public Strategy
{
public:
    Strategy007040();
    virtual ~Strategy007040();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY007040_H
