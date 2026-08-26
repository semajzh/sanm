#ifndef STRATEGY110011_H
#define STRATEGY110011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy110011 : public Strategy
{
public:
    Strategy110011();
    virtual ~Strategy110011();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY110011_H
