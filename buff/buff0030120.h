#ifndef BUFF0030120_H
#define BUFF0030120_H
#include "buff.h"

class Buff0030120 : public BuffR
{
public:
    Buff0030120() {}
    Buff0030120(int s, int d, int m) : BuffR(s, d, m) { id = 30120; }
    virtual ~Buff0030120() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    virtual void run(Ground* ground, int);

private:
    float j8 = 0.0f;
};

class Buff00301202 : public BuffC
{
public:
    Buff00301202() {}
    Buff00301202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 301202; }
    virtual ~Buff00301202() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l1 = 0.0f;
};

#endif // BUFF0030120_H
