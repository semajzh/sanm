#ifndef BUFF2030221_H
#define BUFF2030221_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff2030221 : public BuffR
{
public:
    Buff2030221() {}
    Buff2030221(int s, int d, int m) : BuffR(s, d, m) { id = 2030221; }
    virtual ~Buff2030221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    bool check203021(Ground* ground, int obj);
    float j14 = 0.0f;
};

class Buff20302212 : public BuffC
{
public:
    Buff20302212() {}
    Buff20302212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 20302212; }
    virtual ~Buff20302212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* , float );

private:
    bool check203021(Ground* ground, int obj);
    bool check20302212(Ground* , int );
};

#endif // BUFF2030221_H
