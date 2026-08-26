#ifndef BUFF001040_H
#define BUFF001040_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001040 : public BuffR
{
public:
    Buff001040() {}
    Buff001040(int s, int d, int m) : BuffR(s, d, m) { id = 1040; }
    virtual ~Buff001040() {}
    virtual void run(Ground* ground);
};


#endif // BUFF001040_H
