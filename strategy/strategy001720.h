#ifndef STRATEGY001720_H
#define STRATEGY001720_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001720 : public Strategy
{
public:
    Strategy001720();
    virtual ~Strategy001720();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001720_H
