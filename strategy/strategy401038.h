#ifndef STRATEGY401038_H
#define STRATEGY401038_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy401038 : public Strategy
{
public:
    Strategy401038();
    virtual ~Strategy401038();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY401038_H
