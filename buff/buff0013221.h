#ifndef BUFF0013221_H
#define BUFF0013221_H
#include "buff.h"

class Buff00132211 : public BuffR
{
public:
    Buff00132211() {}
    Buff00132211(int s, int d, int m) : BuffR(s, d, m) { id = 132211; }
    virtual ~Buff00132211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l1 = 0.0f;
};

class Buff00132212 : public BuffR
{
public:
    Buff00132212() {}
    Buff00132212(int s, int d, int m) : BuffR(s, d, m) { id = 132212; }
    virtual ~Buff00132212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0013221_H
