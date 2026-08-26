#ifndef STRATEGY312011_H
#define STRATEGY312011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy312011 : public Strategy
{
public:
    Strategy312011();
    virtual ~Strategy312011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY312011_H
