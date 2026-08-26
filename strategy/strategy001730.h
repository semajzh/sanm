#ifndef STRATEGY001730_H
#define STRATEGY001730_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001730 : public Strategy
{
public:
    Strategy001730();
    virtual ~Strategy001730();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001730_H
