#ifndef STRATEGY102021_H
#define STRATEGY102021_H
#include "strategy.h"

class Ground;
class Item;
class Strategy102021 : public Strategy
{
public:
    Strategy102021();
    virtual ~Strategy102021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY102021_H
