#ifndef BUFF001440_H
#define BUFF001440_H
#include "buff.h"

class Buff001440 : public BuffR
{
public:
    Buff001440() {}
    Buff001440(int s, int d, int m) : BuffR(s, d, m) { id = 1440; }
    virtual ~Buff001440() {}

    virtual void run(Ground* ) {}
    virtual bool run(Ground* , int );
};

class Buff001441 : public BuffR
{
public:
    Buff001441() {}
    Buff001441(int s, int d, int m) : BuffR(s, d, m) { id = 1441; }
    virtual ~Buff001441() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF001440_H
