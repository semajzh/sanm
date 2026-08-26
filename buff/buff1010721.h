#ifndef BUFF1010721_H
#define BUFF1010721_H
#include "buff.h"

class Buff1010721 : public BuffR
{
public:
    Buff1010721() {}
    Buff1010721(int s, int d, int m) : BuffR(s, d, m) { id = 1010721; }
    virtual ~Buff1010721() {}

    virtual void run(Ground* ground);

private:
    int selectObjg1(Ground* ground, int pos1);
};

class Buff10107212 : public BuffC
{
public:
    Buff10107212() {}
    Buff10107212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10107212; }
    virtual ~Buff10107212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    virtual bool run(Ground* , int );

private:
    float k0 = 0.0f;
    bool j02 = false;
};

#endif // BUFF1010721_H
