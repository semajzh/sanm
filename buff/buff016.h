#ifndef BUFF016_H
#define BUFF016_H
#include "buff.h"

class Buff016 : public BuffC
{
public:
    Buff016() {}
    Buff016(int s, int d, int m, int r);
    virtual ~Buff016() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    void run(Ground* , float& point);
};

#endif // BUFF016_H
