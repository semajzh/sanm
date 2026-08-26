#ifndef BUFF3011221_H
#define BUFF3011221_H
#include "buff.h"

class Buff3011221 : public BuffR
{
public:
    Buff3011221() {}
    Buff3011221(int s, int d, int m) : BuffR(s, d, m) { id = 3011221; }
    virtual ~Buff3011221() {}
    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

class Buff30112212 : public BuffC
{
public:
    Buff30112212() {}
    Buff30112212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30112212; }
    virtual ~Buff30112212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF3011221_H
