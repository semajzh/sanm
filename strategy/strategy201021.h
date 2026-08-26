#ifndef STRATEGY201021_H
#define STRATEGY201021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201021 : public Strategy
{
public:
    Strategy201021();
    virtual ~Strategy201021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201021_H
