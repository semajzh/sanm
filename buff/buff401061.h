#ifndef BUFF401061_H
#define BUFF401061_H
#include "buff.h"

class Buff401061 : public BuffR
{
public:
    Buff401061() {}
    Buff401061(int s, int d, int m) : BuffR(s, d, m) { id = 401061; }
    virtual ~Buff401061() {}
};

class Buff4010612 : public BuffC
{
public:
    Buff4010612() {}
    Buff4010612(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010612; }
    virtual ~Buff4010612() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );

private:
    float i1 = 0.0f;
};

#endif // BUFF401061_H
