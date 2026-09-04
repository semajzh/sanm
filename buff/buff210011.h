#ifndef BUFF210011_H
#define BUFF210011_H
#include "buff.h"

class Buff210011 : public BuffR
{
public:
    Buff210011() {}
    Buff210011(int s, int d, int m) : BuffR(s, d, m) { id = 210011; }
    virtual ~Buff210011() {}

    virtual void run(Ground* ) {}
    float run(Ground* , int );

private:
    int check023(Ground* ground, int obj);
};

#endif // BUFF210011_H
