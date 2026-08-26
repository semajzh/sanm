#ifndef STRATEGY201012_H
#define STRATEGY201012_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201012 : public Strategy
{
public:
    Strategy201012();
    virtual ~Strategy201012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201012_H
