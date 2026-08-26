#ifndef STRATEGY201091_H
#define STRATEGY201091_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201091 : public Strategy
{
public:
    Strategy201091();
    virtual ~Strategy201091();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201091_H
