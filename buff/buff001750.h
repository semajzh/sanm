#ifndef BUFF001750_H
#define BUFF001750_H
#include "buff.h"

class Buff001750 : public BuffR
{
public:
    Buff001750() {}
    Buff001750(int s, int d, int m) : BuffR(s, d, m) { id = 1750; }
    virtual ~Buff001750() {}

    virtual void run(Ground* );
};

class Buff001751 : public BuffC
{
public:
    Buff001751() {}
    Buff001751(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1751; }
    virtual ~Buff001751() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001750_H
