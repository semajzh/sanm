#ifndef BUFF0014420_H
#define BUFF0014420_H
#include "buff.h"

class Buff0014420: public BuffR
{
public:
    Buff0014420() {}
    Buff0014420(int s, int d, int m) : BuffR(s, d, m) { id = 14420; }
    virtual ~Buff0014420() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j2 = 0.0f;
};

class Buff00144202: public BuffC
{
public:
    Buff00144202() {}
    Buff00144202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 144202; }
    virtual ~Buff00144202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i1 = 0.0f;
};

#endif // BUFF0014420_H
