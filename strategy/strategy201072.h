#ifndef STRATEGY201072_H
#define STRATEGY201072_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201072 : public Strategy
{
public:
    Strategy201072();
    virtual ~Strategy201072();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201072_H
