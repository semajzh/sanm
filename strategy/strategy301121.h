#ifndef STRATEGY301121_H
#define STRATEGY301121_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301121 : public Strategy
{
public:
    Strategy301121();
    virtual ~Strategy301121();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301121_H
