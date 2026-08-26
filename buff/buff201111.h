#ifndef BUFF201111_H
#define BUFF201111_H
#include "buff.h"

class Buff201111 : public BuffR
{
public:
    Buff201111() {}
    Buff201111(int s, int d, int m) : BuffR(s, d, m) { id = 201111; }
    virtual ~Buff201111() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF201111_H
