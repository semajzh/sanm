#ifndef BUFF1020120_H
#define BUFF1020120_H
#include "buff.h"
#include <QVector>

class Buff1020120 : public BuffR
{
public:
    Buff1020120() {}
    Buff1020120(int s, int d, int m) : BuffR(s, d, m) { id = 1020120; }
    virtual ~Buff1020120() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* );
    void run(Ground* , int obj, float point );

private:
    float j13 = 0.0f;
};

#endif // BUFF1020120_H
