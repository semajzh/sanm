#ifndef STRATEGY201082_H
#define STRATEGY201082_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201082 : public Strategy
{
public:
    Strategy201082();
    virtual ~Strategy201082();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201082_H
