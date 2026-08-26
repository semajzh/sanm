#ifndef BUFF001310_H
#define BUFF001310_H
#include "buff.h"

class Buff001310 : public BuffR
{
public:
    Buff001310() {}
    Buff001310(int s, int d, int m) : BuffR(s, d, m) { id = 1310; }
    virtual ~Buff001310() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k10 = 0.0f;
};

#endif // BUFF001310_H
