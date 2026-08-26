#ifndef BUFF001030_H
#define BUFF001030_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001030 : public BuffR
{
public:
    Buff001030() {}
    Buff001030(int s, int d, int m) : BuffR(s, d, m) { id = 1030; }
    virtual ~Buff001030() {}
    virtual void run(Ground* ground);

private:
    void addBuff(Ground* ground, QVector<QSharedPointer<Buff>>& buffs, QSharedPointer<Buff> &buff);
};


#endif // BUFF001030_H
