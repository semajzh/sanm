#ifndef STRATEGY301021_H
#define STRATEGY301021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy301021 : public Strategy
{
public:
    Strategy301021();
    virtual ~Strategy301021();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301021_H
