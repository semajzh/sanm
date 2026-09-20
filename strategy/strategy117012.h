#ifndef STRATEGY117012_H
#define STRATEGY117012_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy117012 : public Strategy
{
public:
    Strategy117012();
    virtual ~Strategy117012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY117012_H
