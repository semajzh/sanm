#ifndef STRATEGY001150_H
#define STRATEGY001150_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001150 : public Strategy
{
public:
    Strategy001150();
    virtual ~Strategy001150();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001150_H
