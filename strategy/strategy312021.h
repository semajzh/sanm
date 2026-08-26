#ifndef STRATEGY312021_H
#define STRATEGY312021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy312021 : public Strategy
{
public:
    Strategy312021();
    virtual ~Strategy312021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY312021_H
