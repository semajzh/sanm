#ifndef BUFF3150121_H
#define BUFF3150121_H
#include "buff.h"

class Buff31501211 : public BuffR
{
public:
    Buff31501211() {}
    Buff31501211(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 31501211; }
    virtual ~Buff31501211() {}

    virtual void run(Ground* ) {}
    int run(Ground* , float& );

private:
    bool check31501212(Ground* ground, int obj);
};

class Buff31501212 : public BuffR
{
public:
    Buff31501212() {}
    Buff31501212(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 31501212; }
    virtual ~Buff31501212() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int m);

private:
    bool check31501211(Ground* ground, int obj);
    int check31501213(Ground* ground, int obj);
    bool check315011(Ground* ground, int , int );
    int round = 0;
    int count = 0;
};

class Buff31501213 : public BuffC
{
public:
    Buff31501213() {}
    Buff31501213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 31501213; }
    virtual ~Buff31501213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    inline int num() {return count;}

private:
    float k6 = 0.0f;
    float k7 = 0.0f;
    int count = 0;
};

#endif // BUFF3150121_H
