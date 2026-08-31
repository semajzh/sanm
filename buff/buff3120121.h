#ifndef BUFF3120121_H
#define BUFF3120121_H
#include "buff.h"

class Buff31201211 : public BuffR
{
public:
    Buff31201211() {}
    Buff31201211(int s, int d, int m) : BuffR(s, d, m) { id = 31201211; }
    virtual ~Buff31201211() {}

    virtual void run(Ground* );

private:
    QVector<int> selectObj(Ground* ground);
    int check31201212(Ground* ground, int obj);
};

class Buff31201212 : public BuffR
{
public:
    Buff31201212() {}
    Buff31201212(int s, int d, int m, int t = 1) : BuffR(s, d, m, t) { id = 31201212; }
    virtual ~Buff31201212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    int run(Ground* , int );

private:
    int count = 0;
    float k0 = 0.0f;
};

class Buff31201213 : public BuffR
{
public:
    Buff31201213() {}
    Buff31201213(int s, int d, int m) : BuffR(s, d, m) { id = 31201213; }
    virtual ~Buff31201213() {}

    virtual void run(Ground* ground);
};

class Buff31201214 : public BuffC
{
public:
    Buff31201214() {}
    Buff31201214(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 31201214; }
    virtual ~Buff31201214() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    int check31201212(Ground* ground);
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF3120121_H
