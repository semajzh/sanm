#ifndef BUFF3010820_H
#define BUFF3010820_H
#include "buff.h"

class Buff3010820 : public BuffR
{
public:
    Buff3010820() {}
    Buff3010820(int s, int d, int m) : BuffR(s, d, m) { id = 3010820; }
    virtual ~Buff3010820() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k3 = 0.0f;
};

class Buff30108202 : public BuffC
{
public:
    Buff30108202() {}
    Buff30108202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30108202; }
    virtual ~Buff30108202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
};

#endif // BUFF3010820_H
