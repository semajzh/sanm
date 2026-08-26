#ifndef STRATEGY201022_H
#define STRATEGY201022_H
#include "strategy.h"

class Ground;
class Item;
class Strategy201022 : public Strategy
{
public:
    Strategy201022();
    virtual ~Strategy201022();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY201022_H
