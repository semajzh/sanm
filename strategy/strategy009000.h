#ifndef STRATEGY009000_H
#define STRATEGY009000_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy009000 : public Strategy
{
public:
    Strategy009000();
    virtual ~Strategy009000();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY009000_H
