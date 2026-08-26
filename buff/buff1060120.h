#ifndef BUFF1060120_H
#define BUFF1060120_H
#include "buff.h"

class Buff1060120 : public BuffR
{
public:
    Buff1060120() {}
    Buff1060120(int s, int d, int m) : BuffR(s, d, m) { id = 1060120; }
    virtual ~Buff1060120() {}
    virtual void run(Ground* );
};

class Buff10601202 : public BuffR
{
public:
    Buff10601202() {}
    Buff10601202(int s, int d, int m) : BuffR(s, d, m) { id = 10601202; }
    virtual ~Buff10601202() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF1060120_H
