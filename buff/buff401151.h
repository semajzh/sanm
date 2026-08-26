#ifndef BUFF401151_H
#define BUFF401151_H
#include "buff.h"

class Buff401151 : public BuffR
{
public:
    Buff401151() {}
    Buff401151(int s, int d, int m) : BuffR(s, d, m) { id = 401151; }
    virtual ~Buff401151() {}

    virtual void run(Ground* ground);
};

#endif // BUFF401151_H
