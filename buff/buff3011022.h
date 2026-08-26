#ifndef BUFF3011022_H
#define BUFF3011022_H
#include "buff.h"

class Buff3011022 : public BuffC
{
public:
    Buff3011022() {}
    Buff3011022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3011022; }
    virtual ~Buff3011022() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF3011022_H
