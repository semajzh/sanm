#ifndef STRATEGY001170_H
#define STRATEGY001170_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001170 : public Strategy
{
public:
    Strategy001170();
    virtual ~Strategy001170();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001170_H
