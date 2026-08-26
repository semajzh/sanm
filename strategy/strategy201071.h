#ifndef STRATEGY201071_H
#define STRATEGY201071_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201071 : public Strategy
{
public:
    Strategy201071();
    virtual ~Strategy201071();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201071_H
