#ifndef STRATEGY101012_H
#define STRATEGY101012_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101012 : public Strategy
{
public:
    Strategy101012();
    virtual ~Strategy101012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101012_H
