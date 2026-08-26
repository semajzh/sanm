#ifndef BUFF003_H
#define BUFF003_H
#include "buff.h"

class Buff003 : public BuffC
{
public:
    Buff003() {}
    Buff003(int s, int d, int m, int r);
    virtual ~Buff003() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF003_H
