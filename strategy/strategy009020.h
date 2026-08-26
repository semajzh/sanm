#ifndef STRATEGY009020_H
#define STRATEGY009020_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy009020 : public Strategy
{
public:
    Strategy009020();
    virtual ~Strategy009020();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY009020_H
