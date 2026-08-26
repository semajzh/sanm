#ifndef BUFF0040220_H
#define BUFF0040220_H
#include "buff.h"

class Buff00402201 : public BuffR
{
public:
    Buff00402201() {}
    Buff00402201(int s, int d, int m) : BuffR(s, d, m) { id = 402201; }
    virtual ~Buff00402201() {}
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    int count = 0;
    float k0 = 0.0f;
};

class Buff00402202 : public BuffR
{
public:
    Buff00402202() {}
    Buff00402202(int s, int d, int m) : BuffR(s, d, m) { id = 402202; }
    virtual ~Buff00402202() {}
    virtual void run(Ground* );

private:
    float maxi(Ground* ground, int obj);
};

class Buff00402203 : public BuffC
{
public:
    Buff00402203() {}
    Buff00402203(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 402203; }
    virtual ~Buff00402203() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF0040220_H
