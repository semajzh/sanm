#ifndef STRATEGY301072_H
#define STRATEGY301072_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301072 : public Strategy
{
public:
    Strategy301072();
    virtual ~Strategy301072();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY301072_H
