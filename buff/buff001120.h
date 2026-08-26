#ifndef BUFF001120_H
#define BUFF001120_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001120 : public BuffC
{
public:
    Buff001120() {}
    Buff001120(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1120; }
    virtual ~Buff001120() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j6 = 0.0f;
};


#endif // BUFF001120_H
