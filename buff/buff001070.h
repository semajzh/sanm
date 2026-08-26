#ifndef BUFF001070_H
#define BUFF001070_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001070 : public BuffR
{
public:
    Buff001070() {}
    Buff001070(int s, int d, int m) : BuffR(s, d, m) { id = 1070; }
    virtual ~Buff001070() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i0 = 0.0f;
};


#endif // BUFF001070_H
