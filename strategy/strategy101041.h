#ifndef STRATEGY101041_H
#define STRATEGY101041_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101041 : public Strategy
{
public:
    Strategy101041();
    virtual ~Strategy101041();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101041_H
