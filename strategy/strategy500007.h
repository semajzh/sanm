#ifndef STRATEGY500007_H
#define STRATEGY500007_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy500007 : public Strategy
{
public:
    Strategy500007();
    virtual ~Strategy500007();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY500007_H
