#ifndef BUFF001200_H
#define BUFF001200_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff001200 : public BuffC
{
public:
    Buff001200() {}
    Buff001200(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1200; }
    virtual ~Buff001200() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k1 = 0.0f;
};


#endif // BUFF001200_H
