#ifndef BUFF413011_H
#define BUFF413011_H
#include "buff.h"

class Buff413011 : public BuffR
{
public:
    Buff413011() {}
    Buff413011(int s, int d, int m) : BuffR(s, d, m) { id = 413011; }
    virtual ~Buff413011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    bool run(Ground* , int );

private:
    float k1 = 0.0f;
};

#endif // BUFF413011_H
