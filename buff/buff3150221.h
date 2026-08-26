#ifndef BUFF3150221_H
#define BUFF3150221_H
#include "buff.h"

class Buff31502211 : public BuffC
{
public:
    Buff31502211() {}
    Buff31502211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 31502211; }
    virtual ~Buff31502211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* , int obj, int m, float & );

private:
    bool check315021(Ground* ground, int obj);
    int round = 0;
    int count = 0;
    float l0 = 0.0f;
};

class Buff31502212 : public BuffR
{
public:
    Buff31502212() {}
    Buff31502212(int s, int d, int m) : BuffR(s, d, m) { id = 31502212; }
    virtual ~Buff31502212() {}

    virtual void run(Ground* );

private:
    QVector<int> selectObj(Ground* ground, int obj);
};

class Buff31502213 : public BuffR
{
public:
    Buff31502213() {}
    Buff31502213(int s, int d, int m) : BuffR(s, d, m) { id = 31502213; }
    virtual ~Buff31502213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
    float k0 = 0.0f;
};

#endif // BUFF3150221_H
