#ifndef BUFF109011_H
#define BUFF109011_H
#include "buff.h"

class Buff109011 : public BuffR
{
public:
    Buff109011() {}
    Buff109011(int s, int d, int m) : BuffR(s, d, m) { id = 109011; }
    virtual ~Buff109011() {}

    virtual void run(Ground* );
};

class Buff1090112 : public BuffR
{
public:
    Buff1090112() {}
    Buff1090112(int s, int d, int m) : BuffR(s, d, m) { id = 1090112; }
    virtual ~Buff1090112() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

class Buff1090113 : public BuffR
{
public:
    Buff1090113() {}
    Buff1090113(int s, int d, int m) : BuffR(s, d, m) { id = 1090113; }
    virtual ~Buff1090113() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

#endif // BUFF109011_H
