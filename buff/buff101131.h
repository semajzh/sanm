#ifndef BUFF101131_H
#define BUFF101131_H
#include "buff.h"

class Buff101131 : public BuffR
{
public:
    Buff101131() {}
    Buff101131(int s, int d, int m) : BuffR(s, d, m) { id = 101131; }
    virtual ~Buff101131() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    float l0 = 0.0f;
};

class Buff1011312 : public BuffC
{
public:
    Buff1011312() {}
    Buff1011312(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1011312; }
    virtual ~Buff1011312() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101131_H
