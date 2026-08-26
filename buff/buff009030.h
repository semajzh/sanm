#ifndef BUFF009030_H
#define BUFF009030_H
#include "buff.h"

class Buff009030 : public BuffR
{
public:
    Buff009030() {}
    Buff009030(int s, int d, int m) : BuffR(s, d, m) { id = 9030; }
    virtual ~Buff009030() {}

    virtual void run(Ground* ) {}
    float run(Ground* , int );

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF009030_H
