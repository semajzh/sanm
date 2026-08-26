#ifndef STRATEGY001140_H
#define STRATEGY001140_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001140 : public Strategy
{
public:
    Strategy001140();
    virtual ~Strategy001140();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001140_H
