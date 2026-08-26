#ifndef BUFF1010320_H
#define BUFF1010320_H
#include "buff.h"

class Buff1010320 : public BuffR
{
public:
    Buff1010320() {}
    Buff1010320(int s, int d, int m) : BuffR(s, d, m) { id = 1010320; }
    virtual ~Buff1010320() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    float j8 = 0.0f;
};

class Buff10103202 : public BuffC
{
public:
    Buff10103202() {}
    Buff10103202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10103202; }
    virtual ~Buff10103202() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k8 = 0.0f;
    float i2 = 0.0f;
};

#endif // BUFF1010320_H
