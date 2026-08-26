#ifndef STRATEGY302011_H
#define STRATEGY302011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy302011 : public Strategy
{
public:
    Strategy302011();
    virtual ~Strategy302011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY302011_H
