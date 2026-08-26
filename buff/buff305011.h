#ifndef BUFF305011_H
#define BUFF305011_H
#include "buff.h"

class Buff305011 : public BuffR
{
public:
    Buff305011() {}
    Buff305011(int s, int d, int m) : BuffR(s, d, m) { id = 305011; }
    virtual ~Buff305011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
    float i3 = 0.0f;
};

#endif // BUFF305011_H
