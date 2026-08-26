#ifndef BUFF0100320_H
#define BUFF0100320_H
#include "buff.h"

class Buff0100320 : public BuffR
{
public:
    Buff0100320() {}
    Buff0100320(int s, int d, int m) : BuffR(s, d, m) { id = 100320; }
    virtual ~Buff0100320() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    int count = 0;
    int round = 0;
};

class Buff01003202 : public BuffC
{
public:
    Buff01003202() {}
    Buff01003202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1003202; }
    virtual ~Buff01003202() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float k2 = 0.0f;
};

#endif // BUFF0100320_H
