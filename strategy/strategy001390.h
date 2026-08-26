#ifndef STRATEGY001390_H
#define STRATEGY001390_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001390 : public Strategy
{
public:
    Strategy001390();
    virtual ~Strategy001390();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001390_H
