#ifndef STRATEGY201111_H
#define STRATEGY201111_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201111 : public Strategy
{
public:
    Strategy201111();
    virtual ~Strategy201111();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201111_H
