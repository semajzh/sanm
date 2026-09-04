#ifndef BUFF0150221_H
#define BUFF0150221_H
#include "buff.h"

class Buff01502211 : public BuffR
{
public:
    Buff01502211() {}
    Buff01502211(int s, int d, int m) : BuffR(s, d, m) { id = 1502211; }
    virtual ~Buff01502211() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int m);
};

class Buff01502212 : public BuffR
{
public:
    Buff01502212() {}
    Buff01502212(int s, int d, int m) : BuffR(s, d, m) { id = 1502212; }
    virtual ~Buff01502212() {}

    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    virtual void run(Ground* );

private:
    int check01502213(Ground* ground, int obj);
    int round = 0;
    int count = 0;
};

class Buff01502213 : public BuffC
{
public:
    Buff01502213() {}
    Buff01502213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1502213; }
    virtual ~Buff01502213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    inline int num() { return count; }

private:
    int count = 0;
    float l0 = 0.0f;
};

class Buff01502214 : public BuffC
{
public:
    Buff01502214() {}
    Buff01502214(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1502214; }
    virtual ~Buff01502214() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k2 = 0.0f;
};
#endif // BUFF0150221_H
