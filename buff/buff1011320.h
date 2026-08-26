#ifndef BUFF1011320_H
#define BUFF1011320_H
#include "buff.h"
#include <QVector>

class Buff1011320 : public BuffR
{
public:
    Buff1011320() {}
    Buff1011320(int s, int d, int m) : BuffR(s, d, m) { id = 1011320; }
    virtual ~Buff1011320() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ) {}
    void run(Ground* , int obj);

private:
    int round = 0;
    float i2 = 0.0f;
};

class Buff10113202 : public BuffR
{
public:
    Buff10113202() {}
    Buff10113202(int s, int d, int m) : BuffR(s, d, m) { id = 10113202; }
    virtual ~Buff10113202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

#endif // BUFF1011320_H
