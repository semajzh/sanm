#ifndef STRATEGY301026_H
#define STRATEGY301026_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy301026 : public Strategy
{
public:
    Strategy301026();
    virtual ~Strategy301026();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301026_H
