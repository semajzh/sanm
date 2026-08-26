#ifndef BUFF4060221_H
#define BUFF4060221_H
#include "buff.h"

class Buff40602211 : public BuffR
{
public:
    Buff40602211() {}
    Buff40602211(int s, int d, int m) : BuffR(s, d, m) { id = 40602211; }
    virtual ~Buff40602211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float i2 = 0.0f;
};

class Buff40602212 : public BuffR
{
public:
    Buff40602212() {}
    Buff40602212(int s, int d, int m) : BuffR(s, d, m) { id = 40602212; }
    virtual ~Buff40602212() {}
    virtual void run(Ground* ground);
};

class Buff40602213 : public BuffC
{
public:
    Buff40602213() {}
    Buff40602213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40602213; }
    virtual ~Buff40602213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float k0 = 0.0f;
};

#endif // BUFF4060221_H
