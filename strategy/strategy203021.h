#ifndef STRATEGY203021_H
#define STRATEGY203021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy203021 : public Strategy
{
public:
    Strategy203021();
    virtual ~Strategy203021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY203021_H
