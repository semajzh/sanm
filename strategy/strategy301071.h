#ifndef STRATEGY301071_H
#define STRATEGY301071_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301071 : public Strategy
{
public:
    Strategy301071();
    virtual ~Strategy301071();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301071_H
