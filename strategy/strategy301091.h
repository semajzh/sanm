#ifndef STRATEGY301091_H
#define STRATEGY301091_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301091 : public Strategy
{
public:
    Strategy301091();
    virtual ~Strategy301091();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301091_H
