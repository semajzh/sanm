#ifndef BUFF401023_H
#define BUFF401023_H
#include "buff.h"

class Buff401023 : public BuffC
{
public:
    Buff401023() {}
    Buff401023(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401023; }
    virtual ~Buff401023() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif
