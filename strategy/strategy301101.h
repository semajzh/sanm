#ifndef STRATEGY301101_H
#define STRATEGY301101_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301101 : public Strategy
{
public:
    Strategy301101();
    virtual ~Strategy301101();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301101_H
