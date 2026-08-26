#ifndef STRATEGY301041_H
#define STRATEGY301041_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301041 : public Strategy
{
public:
    Strategy301041();
    virtual ~Strategy301041();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301041_H
