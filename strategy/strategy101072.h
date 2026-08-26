#ifndef STRATEGY101072_H
#define STRATEGY101072_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101072 : public Strategy
{
public:
    Strategy101072();
    virtual ~Strategy101072();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101072_H
