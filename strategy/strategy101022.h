#ifndef STRATEGY101022_H
#define STRATEGY101022_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101022 : public Strategy
{
public:
    Strategy101022();
    virtual ~Strategy101022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101022_H
