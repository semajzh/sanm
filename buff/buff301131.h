#ifndef BUFF301131_H
#define BUFF301131_H
#include "buff.h"

class Buff301131 : public BuffR
{
public:
    Buff301131() {}
    Buff301131(int s, int d, int m) : BuffR(s, d, m) { id = 301131; }
    virtual ~Buff301131() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);
};

class Buff3011312 : public BuffC
{
public:
    Buff3011312() {}
    Buff3011312(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3011312; }
    virtual ~Buff3011312() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF301131_H
