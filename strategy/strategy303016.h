#ifndef STRATEGY303016_H
#define STRATEGY303016_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy303016 : public Strategy
{
public:
    Strategy303016();
    virtual ~Strategy303016();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY303016_H
