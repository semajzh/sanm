#ifndef Strategy70000_H
#define Strategy70000_H
#include "strategy.h"

class Ground;
class Item;
class Strategy70000A : public Strategy
{
public:
    Strategy70000A();
    virtual ~Strategy70000A();
    virtual bool run(Ground* ground, Item* item1);
};

class Strategy70000B : public Strategy
{
public:
    Strategy70000B();
    virtual ~Strategy70000B();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // Strategy70000_H
