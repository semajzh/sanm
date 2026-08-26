#ifndef STRATEGY500008_H
#define STRATEGY500008_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500008 : public Strategy
{
public:
    Strategy500008();
    virtual ~Strategy500008();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500008_H
