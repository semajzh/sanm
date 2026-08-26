#ifndef STRATEGY001050_H
#define STRATEGY001050_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001050 : public Strategy
{
public:
    Strategy001050();
    virtual ~Strategy001050();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001050_H
