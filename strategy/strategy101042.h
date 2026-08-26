#ifndef STRATEGY101042_H
#define STRATEGY101042_H
#include "strategy.h"

class Ground;
class Item;
class Strategy101042 : public Strategy
{
public:
    Strategy101042();
    virtual ~Strategy101042();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY101042_H
