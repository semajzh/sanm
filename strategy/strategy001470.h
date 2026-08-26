#ifndef STRATEGY001470_H
#define STRATEGY001470_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001470 : public Strategy
{
public:
    Strategy001470();
    virtual ~Strategy001470();
    virtual bool run(Ground* ground, Item* item1);

private:
    int selectObjg1(Ground* ground, int obj);
};

#endif // STRATEGY001470_H
