#ifndef BUFF0019024_H
#define BUFF0019024_H
#include "buff.h"

class Buff0019024 : public BuffC
{
public:
    Buff0019024() {}
    Buff0019024(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 19024; }
    virtual ~Buff0019024() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i2 = 0.0f;
};

#endif // BUFF0019024_H
