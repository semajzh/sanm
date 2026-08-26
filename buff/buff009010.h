#ifndef BUFF009010_H
#define BUFF009010_H
#include "buff.h"

class Buff009010 : public BuffR
{
public:
    Buff009010() {}
    Buff009010(int s, int d, int m) : BuffR(s, d, m) { id = 9010; }
    virtual ~Buff009010() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
   float l4 = 0.0f;
};

class Buff0090102 : public BuffR
{
public:
    Buff0090102() {}
    Buff0090102(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 90102; }
    virtual ~Buff0090102() {}

    virtual void enter(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
   int hlo = 0;
};

#endif // BUFF009010_H
