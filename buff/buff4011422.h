#ifndef BUFF4011422_H
#define BUFF4011422_H
#include "buff.h"

class Buff4011422 : public BuffC
{
public:
    Buff4011422() {}
    Buff4011422(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 4011422; }
    virtual ~Buff4011422() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j9 = 0.0f;
    float j11 = 0.0f;
};

#endif // BUFF4011422_H
