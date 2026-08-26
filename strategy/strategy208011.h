#ifndef STRATEGY208011_H
#define STRATEGY208011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy208011 : public Strategy
{
public:
    Strategy208011();
    virtual ~Strategy208011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY208011_H
