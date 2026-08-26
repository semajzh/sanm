#ifndef BUFF106_H
#define BUFF106_H
#include "buff.h"

class Buff106 : public BuffR
{
public:
    Buff106() {}
    Buff106(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 106; }
    virtual ~Buff106() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    int run(Ground* ground, int obj, float& point);
};

#endif // BUFF106_H
