#ifndef STRATEGY401121_H
#define STRATEGY401121_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401121 : public Strategy
{
public:
    Strategy401121();
    virtual ~Strategy401121();
    virtual bool run(Ground* ground, Item* item1);

private:
    int selectObj(Ground* ground, int obj);
};

#endif // STRATEGY401121_H
