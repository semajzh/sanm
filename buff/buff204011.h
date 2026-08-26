#ifndef BUFF204011_H
#define BUFF204011_H
#include "buff.h"

class Buff204011 : public BuffC
{
public:
    Buff204011() {}
    Buff204011(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 204011; }
    virtual ~Buff204011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF204011_H
