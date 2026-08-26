#ifndef BUFF1100121_H
#define BUFF1100121_H
#include "buff.h"

class Buff1100121 : public BuffC
{
public:
    Buff1100121() {}
    Buff1100121(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1100121; }
    virtual ~Buff1100121() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

class Buff11001212 : public BuffR
{
public:
    Buff11001212() {}
    Buff11001212(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 11001212; }
    virtual ~Buff11001212() {}

    virtual void enter(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* );

private:
    QVector<int> selectObj(Ground* ground);
    bool check110011(Ground *ground, int obj);
    float actpoint = 0.0f;
};

class Buff11001213 : public BuffC
{
public:
    Buff11001213() {}
    Buff11001213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11001213; }
    virtual ~Buff11001213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF1100121_H
