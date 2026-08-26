#ifndef STRATEGY407011_H
#define STRATEGY407011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy407011 : public Strategy
{
public:
    Strategy407011();
    virtual ~Strategy407011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY407011_H
