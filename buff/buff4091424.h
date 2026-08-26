#ifndef BUFF4091424_H
#define BUFF4091424_H
#include "buff.h"

class Buff40914241 : public BuffC
{
public:
    Buff40914241() {}
    Buff40914241(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 40914241; }
    virtual ~Buff40914241() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
    float i1 = 0.0f;
};

class Buff40914242 : public BuffC
{
public:
    Buff40914242() {}
    Buff40914242(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 40914242; }
    virtual ~Buff40914242() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
    float i1 = 0.0f;
};


#endif // BUFF4091424_H
