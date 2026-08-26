#ifndef STRATEGY101101_H
#define STRATEGY101101_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101101 : public Strategy
{
public:
    Strategy101101();
    virtual ~Strategy101101();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101101_H
