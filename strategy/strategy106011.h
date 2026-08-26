#ifndef STRATEGY106011_H
#define STRATEGY106011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy106011 : public Strategy
{
public:
    Strategy106011();
    virtual ~Strategy106011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY106011_H
