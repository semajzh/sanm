#ifndef BUFF0060221_H
#define BUFF0060221_H
#include "buff.h"

class Buff0060221 : public BuffR
{
public:
    Buff0060221() {}
    Buff0060221(int s, int d, int m) : BuffR(s, d, m) { id = 60221; }
    virtual ~Buff0060221() {}
    virtual void run(Ground* ground);
};

class Buff00602212 : public BuffC
{
public:
    Buff00602212() {}
    Buff00602212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 602212; }
    virtual ~Buff00602212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0060221_H
