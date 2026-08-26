#ifndef BUFF103011_H
#define BUFF103011_H
#include "buff.h"

class Buff103011 : public BuffR
{
public:
    Buff103011() {}
    Buff103011(int s, int d, int m) : BuffR(s, d, m) { id = 103011; }
    virtual ~Buff103011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
    float l0 = 0.0f;
    int count = 0;
};

#endif // BUFF103011_H
