#ifndef BUFF1091120_H
#define BUFF1091120_H
#include "buff.h"

class Buff10911201 : public BuffR
{
public:
    Buff10911201() {}
    Buff10911201(int s, int d, int m) : BuffR(s, d, m) { id = 10911201; }
    virtual ~Buff10911201() {}

    virtual void run(Ground* );
};

class Buff10911202 : public BuffR
{
public:
    Buff10911202() {}
    Buff10911202(int s, int d, int m) : BuffR(s, d, m) { id = 10911202; }
    virtual ~Buff10911202() {}

    virtual void run(Ground* );

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF1091120_H
