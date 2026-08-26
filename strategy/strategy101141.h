#ifndef STRATEGY101141_H
#define STRATEGY101141_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101141 : public Strategy
{
public:
    Strategy101141();
    virtual ~Strategy101141();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101141_H
