#ifndef STRATEGY216011_H
#define STRATEGY216011_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy216011 : public Strategy
{
public:
    Strategy216011();
    virtual ~Strategy216011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY216011_H
