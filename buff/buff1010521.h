#ifndef BUFF1010521_H
#define BUFF1010521_H
#include "buff.h"

class Buff10105211 : public BuffC
{
public:
    Buff10105211() {}
    Buff10105211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10105211; }
    virtual ~Buff10105211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

class Buff10105212 : public BuffR
{
public:
    Buff10105212() {}
    Buff10105212(int s, int d, int m) : BuffR(s, d, m) { id = 10105212; }
    virtual ~Buff10105212() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j16[3] = {0};
};

#endif // BUFF1010521_H
