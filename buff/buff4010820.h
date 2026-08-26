#ifndef BUFF4010820_H
#define BUFF4010820_H
#include "buff.h"

class Buff4010820 : public BuffR
{
public:
    Buff4010820() {}
    Buff4010820(int s, int d, int m) : BuffR(s, d, m) { id = 4010820; }
    virtual ~Buff4010820() {}

    virtual void run(Ground* );

private:
    bool check401081(Ground* ground, int obj);
};

class Buff40108202 : public BuffC
{
public:
    Buff40108202() {}
    Buff40108202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40108202; }
    virtual ~Buff40108202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );

private:
    bool check4110121(Ground* ground);
    float i1 = 0.0f;
    float i2 = 0.0f;
};

#endif // BUFF4010820_H
