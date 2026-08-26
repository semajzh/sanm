#ifndef STRATEGY201061_H
#define STRATEGY201061_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201061 : public Strategy
{
public:
    Strategy201061();
    virtual ~Strategy201061();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201061_H
