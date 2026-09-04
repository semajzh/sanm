#ifndef BUFF216021_H
#define BUFF216021_H
#include "buff.h"

class Buff216021 : public BuffR
{
public:
    Buff216021() {}
    Buff216021(int s, int d, int m) : BuffR(s, d, m) { id = 216021; }
    virtual ~Buff216021() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

#endif // BUFF216021_H
