#ifndef BUFF3010921_H
#define BUFF3010921_H
#include "buff.h"

class Buff30109211 : public BuffC
{
public:
    Buff30109211() {}
    Buff30109211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30109211; }
    virtual ~Buff30109211() {}
    virtual void run(Ground* ground);
};

class Buff30109212 : public BuffR
{
public:
    Buff30109212() {}
    Buff30109212(int s, int d, int m) : BuffR(s, d, m) { id = 30109212; }
    virtual ~Buff30109212() {}
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float i2 = 0.0f;
};

#endif // BUFF3010921_H
