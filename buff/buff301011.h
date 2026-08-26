#ifndef BUFF301011_H
#define BUFF301011_H
#include "buff.h"

class Buff301011 : public BuffR
{
public:
    Buff301011() {}
    Buff301011(int s, int d, int m) : BuffR(s, d, m) { id = 301011; }
    virtual ~Buff301011() {}

    virtual void run(Ground* ground);
};

class Buff3010112 : public BuffC
{
public:
    Buff3010112() {}
    Buff3010112(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3010112; }
    virtual ~Buff3010112() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF301011_H
