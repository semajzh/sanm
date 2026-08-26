#ifndef STRATEGY009010_H
#define STRATEGY009010_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy009010 : public Strategy
{
public:
    Strategy009010();
    virtual ~Strategy009010();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY009010_H
