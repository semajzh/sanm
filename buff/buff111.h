#ifndef BUFF111_H
#define BUFF111_H
#include "buff.h"

class Buff111 : public BuffC
{
public:
    Buff111() {}
    Buff111(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 111; }
    virtual ~Buff111() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF111_H
