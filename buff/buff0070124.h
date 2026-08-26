#ifndef BUFF0070124_H
#define BUFF0070124_H
#include "buff.h"

class Buff0070124 : public BuffR
{
public:
    Buff0070124() {}
    Buff0070124(int s, int d, int m) : BuffR(s, d, m) { id = 70124; }
    virtual ~Buff0070124() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int );
};

#endif // BUFF0070124_H
