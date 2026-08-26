#ifndef STRATEGY201031_H
#define STRATEGY201031_H
#include "strategy.h"

class Ground;
class Item;
class Buff;
class Strategy201031 : public Strategy
{
public:
    Strategy201031();
    virtual ~Strategy201031();
    virtual bool run(Ground* ground, Item* item1);

private:
    void addBuff(Ground* ground, QVector<QSharedPointer<Buff>>& buffs, QSharedPointer<Buff> &buff);
};

#endif // STRATEGY201031_H
