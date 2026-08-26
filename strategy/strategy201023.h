#ifndef STRATEGY201023_H
#define STRATEGY201023_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201023 : public Strategy
{
public:
    Strategy201023();
    virtual ~Strategy201023();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201023_H
