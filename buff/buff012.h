#ifndef BUFF012_H
#define BUFF012_H
#include "buff.h"

class Buff012 : public BuffC
{
public:
    Buff012() {}
    Buff012(int s, int d, int m, int r);
    virtual ~Buff012() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF012_H
