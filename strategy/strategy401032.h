#ifndef STRATEGY401032_H
#define STRATEGY401032_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401032 : public Strategy
{
public:
    Strategy401032();
    virtual ~Strategy401032();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401032_H
