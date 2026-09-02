#ifndef BUFF0017322_H
#define BUFF0017322_H
#include "buff.h"

class Buff0017322 : public BuffC
{
public:
    Buff0017322() {}
    Buff0017322(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17322; }
    virtual ~Buff0017322() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF0017322_H
