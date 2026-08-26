#ifndef STRATEGY001640_H
#define STRATEGY001640_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001640 : public Strategy
{
public:
    Strategy001640();
    virtual ~Strategy001640();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001640_H
