#ifndef STRATEGY401111_H
#define STRATEGY401111_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401111 : public Strategy
{
public:
    Strategy401111();
    virtual ~Strategy401111();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401111_H
