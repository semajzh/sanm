#ifndef BUFF001510_H
#define BUFF001510_H
#include "buff.h"

class Buff001510 : public BuffR
{
public:
    Buff001510() {}
    Buff001510(int s, int d, int m) : BuffR(s, d, m) { id = 1510; }
    virtual ~Buff001510() {}

    virtual void run(Ground* );
};

class Buff001511 : public BuffC
{
public:
    Buff001511() {}
    Buff001511(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1511; }
    virtual ~Buff001511() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k0 = 0.0f;
};

#endif // BUFF001510_H
