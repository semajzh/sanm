#ifndef BUFF0030321_H
#define BUFF0030321_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff0030321 : public BuffR
{
public:
    Buff0030321() {}
    Buff0030321(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 30321; }
    virtual ~Buff0030321() {}

    virtual void run(Ground* ground);
};


#endif // BUFF0030321_H
