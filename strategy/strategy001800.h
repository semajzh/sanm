#ifndef STRATEGY001800_H
#define STRATEGY001800_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001800 : public Strategy
{
public:
    Strategy001800();
    virtual ~Strategy001800();
    virtual bool run(Ground* ground, Item* item1);
};

#endif // STRATEGY001800_H
