#ifndef STRATEGY001480_H
#define STRATEGY001480_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy001480 : public Strategy
{
public:
    Strategy001480();
    virtual ~Strategy001480();
    virtual bool run(Ground* ground, Item* item1);

private:
    int selectObjg1(Ground* ground, int obj);
};

#endif // STRATEGY001480_H
