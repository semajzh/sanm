#ifndef STRATEGY001410_H
#define STRATEGY001410_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001410 : public Strategy
{
public:
    Strategy001410();
    virtual ~Strategy001410();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001410_H
