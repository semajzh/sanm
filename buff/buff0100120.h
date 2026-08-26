#ifndef BUFF0100120_H
#define BUFF0100120_H
#include "buff.h"

class Buff0100120 : public BuffR
{
public:
    Buff0100120() {}
    Buff0100120(int s, int d, int m) : BuffR(s, d, m) { id = 100120; }
    virtual ~Buff0100120() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    bool check002(Ground* , int );
    int round = 0;
    int count = 0;
};

class Buff01001202 : public BuffR
{
public:
    Buff01001202() {}
    Buff01001202(int s, int d, int m) : BuffR(s, d, m) { id = 1001202; }
    virtual ~Buff01001202() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
};

class Buff01001203 : public BuffC
{
public:
    Buff01001203() {}
    Buff01001203(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1001203; }
    virtual ~Buff01001203() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF0100120_H
