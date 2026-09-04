#ifndef STRATEGY216021_H
#define STRATEGY216021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy216021 : public Strategy
{
public:
    Strategy216021();
    virtual ~Strategy216021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY216021_H
