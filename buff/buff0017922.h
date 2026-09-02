#ifndef BUFF0017922_H
#define BUFF0017922_H
#include "buff.h"

class Buff0017922 : public BuffC
{
public:
    Buff0017922() {}
    Buff0017922(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17922; }
    virtual ~Buff0017922() {}
};

class Buff00179221 : public BuffC
{
public:
    Buff00179221() {}
    Buff00179221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 179221; }
    virtual ~Buff00179221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j13 = 0.0f;
};

#endif // BUFF0017922_H
