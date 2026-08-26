#ifndef BUFF0050121_H
#define BUFF0050121_H
#include "buff.h"
#include <QVector>

class Buff00501211 : public BuffC
{
public:
    Buff00501211() {}
    Buff00501211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 501211; }
    virtual ~Buff00501211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float k1 = 0.0f;
};

class Buff00501212 : public BuffC
{
public:
    Buff00501212() {}
    Buff00501212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 501212; }
    virtual ~Buff00501212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float k2 = 0.0f;
};

#endif // BUFF0050121_H
