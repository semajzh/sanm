#ifndef BUFF301111_H
#define BUFF301111_H
#include "buff.h"

class Buff301111 : public BuffR
{
public:
    Buff301111() {}
    Buff301111(int s, int d, int m) : BuffR(s, d, m) { id = 301111; }
    virtual ~Buff301111() {}
    virtual void run(Ground* ground);
};

#endif // BUFF301111_H
