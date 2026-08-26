#ifndef STRATEGY204011_H
#define STRATEGY204011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy204011 : public Strategy
{
public:
    Strategy204011();
    virtual ~Strategy204011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY204011_H
