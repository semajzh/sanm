#ifndef STRATEGY001200_H
#define STRATEGY001200_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001200 : public Strategy
{
public:
    Strategy001200();
    virtual ~Strategy001200();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001200_H
