#ifndef BUFF114011_H
#define BUFF114011_H
#include "buff.h"

class Buff114011 : public BuffR
{
public:
    Buff114011() {}
    Buff114011(int s, int d, int m) : BuffR(s, d, m) { id = 114011; }
    virtual ~Buff114011() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};


class Buff1140112 : public BuffC
{
public:
    Buff1140112() {}
    Buff1140112(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 1140112; }
    virtual ~Buff1140112() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l2 = 0.0f;
};

class Buff1140113 : public BuffC
{
public:
    Buff1140113() {}
    Buff1140113(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 1140113; }
    virtual ~Buff1140113() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l2 = 0.0f;
};

#endif // BUFF114011_H
