#ifndef BUFF500005_H
#define BUFF500005_H
#include "buff.h"

class Buff500005 : public BuffR
{
public:
    Buff500005() {}
    Buff500005(int s, int d, int m) : BuffR(s, d, m) { id = 500005; }
    virtual ~Buff500005() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

class Buff5000052 : public BuffC
{
public:
    Buff5000052() {}
    Buff5000052(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 5000052; }
    virtual ~Buff5000052() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
};

#endif // BUFF500005_H
