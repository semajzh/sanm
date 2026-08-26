#ifndef BUFF1010221_H
#define BUFF1010221_H
#include "buff.h"

class Buff10102211 : public BuffR
{
public:
    Buff10102211() {}
    Buff10102211(int s, int d, int m) : BuffR(s, d, m) { id = 10102211; }
    virtual ~Buff10102211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j4 = 0.0f;
};

class Buff10102212 : public BuffR
{
public:
    Buff10102212() {}
    Buff10102212(int s, int d, int m) : BuffR(s, d, m) { id = 10102212; }
    virtual ~Buff10102212() {}

    virtual void run(Ground* ) {}
    virtual bool run(Ground* ground, int );

private:
    int round = 0;
};

#endif // BUFF1010221_H
