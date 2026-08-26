#ifndef BUFF001180_H
#define BUFF001180_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001180 : public BuffC
{
public:
    Buff001180() {}
    Buff001180(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1180; }
    virtual ~Buff001180() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j9 = 0.0f;
};


#endif // BUFF001180_H
