#ifndef BUFF0180121_H
#define BUFF0180121_H
#include "buff.h"

class Buff01801211 : public BuffC
{
public:
    Buff01801211() {}
    Buff01801211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1801211; }
    virtual ~Buff01801211() {}
    virtual void run(Ground* ground);
};

class Buff01801212 : public BuffR
{
public:
    Buff01801212() {}
    Buff01801212(int s, int d, int m) : BuffR(s, d, m) { id = 1801212; }
    virtual ~Buff01801212() {}
    virtual void run(Ground* ground);
};

class Buff01801213 : public BuffC
{
public:
    Buff01801213() {}
    Buff01801213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1801213; }
    virtual ~Buff01801213() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    int size() const { return qMin(count, 10); }

private:
    int count = 0;
    float l0 = 0.0f;
};

class Buff01801214 : public BuffR
{
public:
    Buff01801214() {}
    Buff01801214(int s, int d, int m) : BuffR(s, d, m) { id = 1801214; }
    virtual ~Buff01801214() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j7 = 0.0f;
};

#endif
