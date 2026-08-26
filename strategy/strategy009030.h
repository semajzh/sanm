#ifndef STRATEGY009030_H
#define STRATEGY009030_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy009030 : public Strategy
{
public:
    Strategy009030();
    virtual ~Strategy009030();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY009030_H
