#ifndef BUFF001420_H
#define BUFF001420_H
#include "buff.h"

class Buff001420 : public BuffR
{
public:
    Buff001420() {}
    Buff001420(int s, int d, int m) : BuffR(s, d, m) { id = 1420; }
    virtual ~Buff001420() {}

    virtual void run(Ground* );
};

class Buff001421 : public BuffC
{
public:
    Buff001421() {}
    Buff001421(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1421; }
    virtual ~Buff001421() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float i2 = 0.0f;
};

#endif // BUFF001420_H
