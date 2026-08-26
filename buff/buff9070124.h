#ifndef BUFF9070124_H
#define BUFF9070124_H
#include "buff.h"

class Buff9070124 : public BuffR
{
public:
    Buff9070124() {}
    Buff9070124(int s, int d, int m) : BuffR(s, d, m) { id = 9070124; }
    virtual ~Buff9070124() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int );
};

#endif // BUFF9070124_H
