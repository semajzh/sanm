#ifndef STRATEGY101111_H
#define STRATEGY101111_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101111 : public Strategy
{
public:
    Strategy101111();
    virtual ~Strategy101111();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101111_H
