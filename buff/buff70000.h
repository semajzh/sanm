#ifndef BUFF70000_H
#define BUFF70000_H
#include "buff.h"

class Buff70000A : public BuffR
{
public:
    Buff70000A() {}
    Buff70000A(int s, int d, int m) : BuffR(s, d, m) { id = 70000; }
    virtual ~Buff70000A() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

class Buff70000B : public BuffR
{
public:
    Buff70000B() {}
    Buff70000B(int s, int d, int m) : BuffR(s, d, m) { id = -700001; }
    virtual ~Buff70000B() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

class Buff70000C : public BuffR
{
public:
    Buff70000C() {}
    Buff70000C(int s, int d, int m) : BuffR(s, d, m) { id = -700002; }
    virtual ~Buff70000C() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF70000_H
