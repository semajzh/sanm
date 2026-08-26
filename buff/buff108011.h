#ifndef BUFF108011_H
#define BUFF108011_H
#include "buff.h"

class Buff108011 : public BuffR
{
public:
    Buff108011() {}
    Buff108011(int s, int d, int m) : BuffR(s, d, m) { id = 108011; }
    virtual ~Buff108011() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF108011_H
