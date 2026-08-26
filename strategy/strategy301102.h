#ifndef STRATEGY301102_H
#define STRATEGY301102_H
#include "strategy.h"

class Ground;
class Item;
class Strategy301102 : public Strategy
{
public:
    Strategy301102();
    virtual ~Strategy301102();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY301102_H
