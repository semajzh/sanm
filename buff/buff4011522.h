#ifndef BUFF4011522_H
#define BUFF4011522_H
#include "buff.h"

class Buff4011522 : public BuffC
{
public:
    Buff4011522() {}
    Buff4011522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4011522; }
    virtual ~Buff4011522() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF4011522_H
