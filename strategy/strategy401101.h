#ifndef STRATEGY401101_H
#define STRATEGY401101_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401101 : public Strategy
{
public:
    Strategy401101();
    virtual ~Strategy401101();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401101_H
