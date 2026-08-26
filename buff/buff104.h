#ifndef BUFF104_H
#define BUFF104_H
#include "buff.h"

class Buff104 : public BuffC
{
public:
    Buff104() {}
    Buff104(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 104; }
    virtual ~Buff104() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF104_H
