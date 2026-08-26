#ifndef BUFF0040121_H
#define BUFF0040121_H
#include "buff.h"

class Buff00401211 : public BuffC
{
public:
    Buff00401211() {}
    Buff00401211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401211; }
    virtual ~Buff00401211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

class Buff00401212 : public BuffC
{
public:
    Buff00401212() {}
    Buff00401212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401212; }
    virtual ~Buff00401212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0040121_H
