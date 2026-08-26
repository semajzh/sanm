#ifndef STRATEGY301012_H
#define STRATEGY301012_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy301012 : public Strategy
{
public:
    Strategy301012();
    virtual ~Strategy301012();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301012_H
