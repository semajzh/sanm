#ifndef STRATEGY500002_H
#define STRATEGY500002_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500002 : public Strategy
{
public:
    Strategy500002();
    virtual ~Strategy500002();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500002_H
