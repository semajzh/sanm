#ifndef BUFF401131_H
#define BUFF401131_H
#include "buff.h"

class Buff401131 : public BuffR
{
public:
    Buff401131() {}
    Buff401131(int s, int d, int m) : BuffR(s, d, m) { id = 401131; }
    virtual ~Buff401131() {}
    virtual void run(Ground* ground);
};

class Buff4011312 : public BuffC
{
public:
    Buff4011312() {}
    Buff4011312(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4011312; }
    virtual ~Buff4011312() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF401131_H
