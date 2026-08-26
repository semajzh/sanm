#ifndef STRATEGY401058_H
#define STRATEGY401058_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401058 : public Strategy
{
public:
    Strategy401058();
    virtual ~Strategy401058();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401058_H
