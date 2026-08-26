#ifndef STRATEGY301061_H
#define STRATEGY301061_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301061 : public Strategy
{
public:
    Strategy301061();
    virtual ~Strategy301061();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301061_H
