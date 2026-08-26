#ifndef STRATEGY201041_H
#define STRATEGY201041_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201041 : public Strategy
{
public:
    Strategy201041();
    virtual ~Strategy201041();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201041_H
