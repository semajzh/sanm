#ifndef BUFF1091321_H
#define BUFF1091321_H
#include "buff.h"

class Buff10913211 : public BuffR
{
public:
    Buff10913211() {}
    Buff10913211(int s, int d, int m) : BuffR(s, d, m) { id = 10913211; }
    virtual ~Buff10913211() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    float j8 = 0.0f;
    float k8 = 0.0f;
};

class Buff10913212 : public BuffR
{
public:
    Buff10913212() {}
    Buff10913212(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 10913212; }
    virtual ~Buff10913212() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int& obj);
};

#endif // BUFF1091321_H
