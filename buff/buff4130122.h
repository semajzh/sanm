#ifndef BUFF4130122_H
#define BUFF4130122_H
#include "buff.h"

class Buff4130122 : public BuffR
{
public:
    Buff4130122() {}
    Buff4130122(int s, int d, int m) : BuffR(s, d, m) { id = 4130122; }
    virtual ~Buff4130122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    bool run(Ground * , int );

private:
    int count = 0;
    float l0 = 0.0f;
};

class Buff41301222 : public BuffC
{
public:
    Buff41301222() {}
    Buff41301222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 41301222; }
    virtual ~Buff41301222() {}

    virtual void run(Ground* ) {}
    bool run(Ground * , int );

private:
    int method22 = 0;
};

#endif // BUFF4130122_H
