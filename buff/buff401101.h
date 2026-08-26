#ifndef BUFF401101_H
#define BUFF401101_H
#include "buff.h"

class Buff401101 : public BuffR
{
public:
    Buff401101() {}
    Buff401101(int s, int d, int m) : BuffR(s, d, m) { id = 401101; }
    virtual ~Buff401101() {}

    virtual void run(Ground* );
};

class Buff4011012 : public BuffC
{
public:
    Buff4011012() {}
    Buff4011012(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4011012; }
    virtual ~Buff4011012() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF401101_H
