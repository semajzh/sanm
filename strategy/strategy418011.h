#ifndef STRATEGY418011_H
#define STRATEGY418011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy418011 : public Strategy
{
public:
    Strategy418011();
    virtual ~Strategy418011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif
