#ifndef STRATEGY303012_H
#define STRATEGY303012_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy303012 : public Strategy
{
public:
    Strategy303012();
    virtual ~Strategy303012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY303012_H
