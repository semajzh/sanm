#ifndef BUFF1140121_H
#define BUFF1140121_H
#include "buff.h"

class Buff1140121 : public BuffR
{
public:
    Buff1140121() {}
    Buff1140121(int s, int d, int m) : BuffR(s, d, m) { id = 1140121; }
    virtual ~Buff1140121() {}

    virtual void run(Ground* );
    void run(Ground* , int );

private:
    bool check102(Ground* ground);
    bool check114011(Ground* ground, int obj);
};

class Buff11401212 : public BuffC
{
public:
    Buff11401212() {}
    Buff11401212(int s, int d, int m, int t) : BuffC(s, d, m, t) { id = 11401212; }
    virtual ~Buff11401212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
    float k2 = 0.0f;
};

#endif // BUFF1140121_H
