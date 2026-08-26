#ifndef BUFF001660_H
#define BUFF001660_H
#include "buff.h"

class Buff001660 : public BuffR
{
public:
    Buff001660() {}
    Buff001660(int s, int d, int m) : BuffR(s, d, m) { id = 1660; }
    virtual ~Buff001660() {}

    virtual void run(Ground* ) {}
    virtual float run(Ground* , int);
};

#endif // BUFF001660_H
