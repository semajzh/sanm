#ifndef BUFF0090121_H
#define BUFF0090121_H
#include "buff.h"

class Buff00901211 : public BuffC
{
public:
    Buff00901211() {}
    Buff00901211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 901211; }
    virtual ~Buff00901211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

class Buff00901212 : public BuffR
{
public:
    Buff00901212() {}
    Buff00901212(int s, int d, int m) : BuffR(s, d, m) { id = 901212; }
    virtual ~Buff00901212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0090121_H
