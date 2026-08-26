#ifndef BUFF0011922_H
#define BUFF0011922_H
#include "buff.h"

class Buff0011922 : public BuffC
{
public:
    Buff0011922() {}
    Buff0011922(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11922; }
    virtual ~Buff0011922() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j7 = 0.0f;
};

#endif // BUFF0011922_H
