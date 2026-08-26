#ifndef STRATEGY401037_H
#define STRATEGY401037_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy401037 : public Strategy
{
public:
    Strategy401037();
    virtual ~Strategy401037();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401037_H
