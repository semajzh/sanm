#ifndef BUFF009000_H
#define BUFF009000_H
#include "buff.h"

class Buff009000 : public BuffR
{
public:
    Buff009000() {}
    Buff009000(int s, int d, int m) : BuffR(s, d, m) { id = 9000; }
    virtual ~Buff009000() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int , int , float );
};

#endif // BUFF009000_H
