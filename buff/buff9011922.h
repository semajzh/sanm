#ifndef BUFF9011922_H
#define BUFF9011922_H
#include "buff.h"

class Buff9011922 : public BuffC
{
public:
    Buff9011922() {}
    Buff9011922(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 9011922; }
    virtual ~Buff9011922() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j7 = 0.0f;
};

#endif // BUFF9011922_H
