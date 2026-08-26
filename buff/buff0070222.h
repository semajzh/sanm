#ifndef BUFF0070222_H
#define BUFF0070222_H
#include "buff.h"

class Buff0070222 : public BuffC
{
public:
    Buff0070222() {}
    Buff0070222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 70222; }
    virtual ~Buff0070222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF0070222_H
