#ifndef BUFF401051_H
#define BUFF401051_H
#include "buff.h"

class Buff401051 : public BuffR
{
public:
    Buff401051() {}
    Buff401051(int s, int d, int m) : BuffR(s, d, m) { id = 401051; }
    virtual ~Buff401051() {}

    virtual void run(Ground* ground);

private:
    int selectObjMaxi0(Ground* ground, int obj);
};

class Buff4010512 : public BuffC
{
public:
    Buff4010512() {}
    Buff4010512(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010512; }
    virtual ~Buff4010512() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j13 = 0.0f;
};

#endif // BUFF401051_H
