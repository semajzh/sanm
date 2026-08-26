#ifndef BUFF0130121_H
#define BUFF0130121_H
#include "buff.h"

class Buff01301211 : public BuffC
{
public:
    Buff01301211() {}
    Buff01301211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1301211; }
    virtual ~Buff01301211() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int , int );
};

class Buff01301212 : public BuffR
{
public:
    Buff01301212() {}
    Buff01301212(int s, int d, int m) : BuffR(s, d, m) { id = 1301212; }
    virtual ~Buff01301212() {}

    virtual void run(Ground* );
};

class Buff01301213 : public BuffR
{
public:
    Buff01301213() {}
    Buff01301213(int s, int d, int m) : BuffR(s, d, m) { id = 1301213; }
    virtual ~Buff01301213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF0130121_H
