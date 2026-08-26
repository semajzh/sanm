#ifndef BUFF0102021_H
#define BUFF0102021_H
#include "buff.h"

class Buff0102021 : public BuffR
{
public:
    Buff0102021() {}
    Buff0102021(int s, int d, int m) : BuffR(s, d, m) { id = 102021; }
    virtual ~Buff0102021() {}

    virtual void run(Ground* );
    void run(Ground* , int );
};

class Buff01020212 : public BuffC
{
public:
    Buff01020212() {}
    Buff01020212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1020212; }
    virtual ~Buff01020212() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

class Buff01020213 : public BuffR
{
public:
    Buff01020213() {}
    Buff01020213(int s, int d, int m) : BuffR(s, d, m) { id = 1020213; }
    virtual ~Buff01020213() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF0102021_H
