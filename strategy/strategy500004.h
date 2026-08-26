#ifndef STRATEGY500004_H
#define STRATEGY500004_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500004 : public Strategy
{
public:
    Strategy500004();
    virtual ~Strategy500004();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500004_H
