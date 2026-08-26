#ifndef BUFF0110321_H
#define BUFF0110321_H
#include "buff.h"

class Buff0110321 : public BuffR
{
public:
    Buff0110321() {}
    Buff0110321(int s, int d, int m) : BuffR(s, d, m) { id = 110321; }
    virtual ~Buff0110321() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int , int );

private:
    int selectobjf1(Ground* ground);
    int round = 0;
    int count = 0;
};

class Buff01103212 : public BuffC
{
public:
    Buff01103212() {}
    Buff01103212(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 1103212; }
    virtual ~Buff01103212() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count1 = 0;
    int count2 = 0;
    float k1 = 0.0f;
    float k2 = 0.0f;
};

#endif // BUFF0110321_H
