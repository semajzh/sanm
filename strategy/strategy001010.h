#ifndef STRATEGY001010_H
#define STRATEGY001010_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001010 : public Strategy
{
public:
    Strategy001010();
    virtual ~Strategy001010();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001010_H
