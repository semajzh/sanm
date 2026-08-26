#ifndef BUFF409011_H
#define BUFF409011_H
#include "buff.h"

class Buff409011 : public BuffR
{
public:
    Buff409011() {}
    Buff409011(int s, int d, int m) : BuffR(s, d, m) { id = 409011; }
    virtual ~Buff409011() {}

    virtual void run(Ground* ) {}
    float run(Ground* , int );
};

#endif // BUFF409011_H
