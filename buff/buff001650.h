#ifndef BUFF001650_H
#define BUFF001650_H
#include "buff.h"

class Buff001650 : public BuffR
{
public:
    Buff001650() {}
    Buff001650(int s, int d, int m) : BuffR(s, d, m) { id = 1650; }
    virtual ~Buff001650() {}

    virtual void run(Ground* ) {}
    virtual float run(Ground* , int);
};

#endif // BUFF001650_H
