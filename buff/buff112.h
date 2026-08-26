#ifndef BUFF112_H
#define BUFF112_H
#include "buff.h"

class Buff112 : public BuffC
{
public:
    Buff112() {}
    Buff112(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 112; }
    virtual ~Buff112() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF112_H
