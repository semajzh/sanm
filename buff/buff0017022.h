#ifndef BUFF0017022_H
#define BUFF0017022_H
#include "buff.h"

class Buff0017022 : public BuffC
{
public:
    Buff0017022() {}
    Buff0017022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17022; }
    virtual ~Buff0017022() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i2 = 0.0f;
};

#endif // BUFF0017022_H
