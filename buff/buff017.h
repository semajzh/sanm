#ifndef BUFF017_H
#define BUFF017_H
#include "buff.h"

class Buff017 : public BuffC
{
public:
    Buff017() {}
    Buff017(int s, int d, int m, int r);
    virtual ~Buff017() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF017_H
