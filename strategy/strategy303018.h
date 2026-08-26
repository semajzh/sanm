#ifndef STRATEGY303018_H
#define STRATEGY303018_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy303018 : public Strategy
{
public:
    Strategy303018();
    virtual ~Strategy303018();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY303018_H
