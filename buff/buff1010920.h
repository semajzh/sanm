#ifndef BUFF1010920_H
#define BUFF1010920_H
#include "buff.h"
#include <QVector>

class Buff1010920 : public BuffR
{
public:
    Buff1010920() {}
    Buff1010920(int s, int d, int m) : BuffR(s, d, m) { id = 1010920; }
    virtual ~Buff1010920() {}
    virtual void run(Ground* );
};

class Buff10109202 : public BuffC
{
public:
    Buff10109202() {}
    Buff10109202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10109202; }
    virtual ~Buff10109202() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    float i0 = 0.0f;
    float k0 = 0.0f;
    float j0 = 0.0f;
    QVector<int> selectObj(Ground* ground, int pos);
};

#endif // BUFF1010920_H
