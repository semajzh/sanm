#ifndef BUFF001130_H
#define BUFF001130_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001130 : public BuffR
{
public:
    Buff001130() {}
    Buff001130(int s, int d, int m) : BuffR(s, d, m) { id = 1130; }
    virtual ~Buff001130() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001130_H
