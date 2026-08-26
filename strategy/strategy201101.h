#ifndef STRATEGY201101_H
#define STRATEGY201101_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201101 : public Strategy
{
public:
    Strategy201101();
    virtual ~Strategy201101();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201101_H
