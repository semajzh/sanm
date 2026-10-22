#ifndef BUFF401042_H
#define BUFF401042_H
#include "buff.h"

class Buff401042 : public BuffR
{
public:
    Buff401042() {}
    Buff401042(int s, int d, int m) : BuffR(s, d, m) { id = 401042; }
    virtual ~Buff401042() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int );

private:
    float i1 = 0;
};

class Buff4010421 : public BuffR
{
public:
    Buff4010421() {}
    Buff4010421(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 4010421; }
    virtual ~Buff4010421() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    float i1 = 0;
};

#endif
