#ifndef STRATEGY401082_H
#define STRATEGY401082_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401082 : public Strategy
{
public:
    Strategy401082();
    virtual ~Strategy401082();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401082_H
