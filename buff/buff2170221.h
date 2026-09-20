#ifndef BUFF2170221_H
#define BUFF2170221_H
#include "buff.h"
#include <QVector>

class Buff21702211 : public BuffC
{
public:
    Buff21702211() {}
    Buff21702211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 21702211; }
    virtual ~Buff21702211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    float k0 = 0.0f;
};

class Buff21702212 : public BuffC
{
public:
    Buff21702212() {}
    Buff21702212(int s, int d, int m, int r, int t = 1) : BuffC(s, d, m, r, t) { id = 21702212; }
    virtual ~Buff21702212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    inline int num() { return count; }

private:
    int count = 0;
    float l0 = 0.0f;
};

class Buff21702213 : public BuffR
{
public:
    Buff21702213() {}
    Buff21702213(int s, int d, int m) : BuffR(s, d, m) { id = 21702213; }
    virtual ~Buff21702213() {}

    virtual void run(Ground* ground);

private:
    int check21702212(Ground* ground, int obj);
};

#endif // BUFF2170221_H
