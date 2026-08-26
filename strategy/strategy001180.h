#ifndef STRATEGY001180_H
#define STRATEGY001180_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001180 : public Strategy
{
public:
    Strategy001180();
    virtual ~Strategy001180();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001180_H
