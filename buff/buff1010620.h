#ifndef BUFF1010620_H
#define BUFF1010620_H
#include "buff.h"
#include <QVector>

class Buff1010620 : public BuffR
{
public:
    Buff1010620() {}
    Buff1010620(int s, int d, int m) : BuffR(s, d, m) { id = 1010620; }
    virtual ~Buff1010620() {}
    virtual void run(Ground* ) {}
    virtual void run(Ground* , int);
};

class Buff10106202 : public BuffC
{
public:
    Buff10106202() {}
    Buff10106202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10106202; }
    virtual ~Buff10106202() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    bool check101061(Ground* ground, int obj);

private:
    float k0 = 0.0f;
};

#endif // BUFF1010620_H
