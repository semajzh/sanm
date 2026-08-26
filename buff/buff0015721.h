#ifndef BUFF0015721_H
#define BUFF0015721_H
#include "buff.h"

class Buff0015721 : public BuffC
{
public:
    Buff0015721() {}
    Buff0015721(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 15721; }
    virtual ~Buff0015721() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0015721_H
