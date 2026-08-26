#ifndef STRATEGY401071_H
#define STRATEGY401071_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401071 : public Strategy
{
public:
    Strategy401071();
    virtual ~Strategy401071();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401071_H
