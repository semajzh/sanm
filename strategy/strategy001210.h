#ifndef STRATEGY001210_H
#define STRATEGY001210_H
#include "strategy.h"

class Ground;
class Item;
class Strategy001210 : public Strategy
{
public:
    Strategy001210();
    virtual ~Strategy001210();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001210_H
