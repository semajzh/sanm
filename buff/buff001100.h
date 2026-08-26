#ifndef BUFF001100_H
#define BUFF001100_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001100 : public BuffR
{
public:
    Buff001100() {}
    Buff001100(int s, int d, int m) : BuffR(s, d, m) { id = 1100; }
    virtual ~Buff001100() {}
    virtual void run(Ground* ) {}
    float run(Ground* ground, int pos);
};


#endif // BUFF001100_H
