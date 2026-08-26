#ifndef STRATEGY301111_H
#define STRATEGY301111_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301111 : public Strategy
{
public:
    Strategy301111();
    virtual ~Strategy301111();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301111_H
