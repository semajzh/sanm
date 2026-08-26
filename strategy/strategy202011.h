#ifndef STRATEGY202011_H
#define STRATEGY202011_H
#include "strategy.h"

class Ground;
class Item;
class Strategy202011 : public Strategy
{
public:
    Strategy202011();
    virtual ~Strategy202011();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY202011_H
