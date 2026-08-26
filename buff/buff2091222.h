#ifndef BUFF2091222_H
#define BUFF2091222_H
#include "buff.h"

class Buff2091222 : public BuffC
{
public:
    Buff2091222() {}
    Buff2091222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2091222; }
    virtual ~Buff2091222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float j0 = 0.0f;
};

class Buff20912222 : public BuffR
{
public:
    Buff20912222() {}
    Buff20912222(int s, int d, int m) : BuffR(s, d, m) { id = 20912222; }
    virtual ~Buff20912222() {}

    virtual void enter(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ) {}
    int run(Ground* , int );

private:
    int count = 0;
};

#endif // BUFF2091222_H
