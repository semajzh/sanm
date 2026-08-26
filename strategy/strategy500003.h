#ifndef STRATEGY500003_H
#define STRATEGY500003_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500003 : public Strategy
{
public:
    Strategy500003();
    virtual ~Strategy500003();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500003_H
