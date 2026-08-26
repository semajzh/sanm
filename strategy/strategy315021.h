#ifndef STRATEGY315021_H
#define STRATEGY315021_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy315021 : public Strategy
{
public:
    Strategy315021();
    virtual ~Strategy315021();
    virtual bool run(Ground* ground, Item* item1);

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

#endif // STRATEGY315021_H
