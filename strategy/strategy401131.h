#ifndef STRATEGY401131_H
#define STRATEGY401131_H
#include "strategy.h"

class Ground;
class Item;
class Strategy401131 : public Strategy
{
public:
    Strategy401131();
    virtual ~Strategy401131();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY401131_H
