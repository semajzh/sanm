#ifndef STRATEGY309011_H
#define STRATEGY309011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy309011 : public Strategy
{
public:
    Strategy309011();
    virtual ~Strategy309011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY309011_H
