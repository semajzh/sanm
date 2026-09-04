#ifndef STRATEGY216012_H
#define STRATEGY216012_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy216012 : public Strategy
{
public:
    Strategy216012();
    virtual ~Strategy216012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY216012_H
