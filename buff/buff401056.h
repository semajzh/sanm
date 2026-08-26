#ifndef BUFF401056_H
#define BUFF401056_H
#include "buff.h"

class Buff401056 : public BuffC
{
public:
    Buff401056() {}
    Buff401056(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401056; }
    virtual ~Buff401056() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int, float );
};


#endif // BUFF401056_H
