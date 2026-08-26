#ifndef BUFF3011322_H
#define BUFF3011322_H
#include "buff.h"

class Buff3011322 : public BuffC
{
public:
    Buff3011322() {}
    Buff3011322(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3011322; }
    virtual ~Buff3011322() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF3011322_H
