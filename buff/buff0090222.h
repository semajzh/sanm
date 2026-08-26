#ifndef BUFF0090222_H
#define BUFF0090222_H
#include "buff.h"

class Buff0090222 : public BuffC
{
public:
    Buff0090222() {}
    Buff0090222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 90222; }
    virtual ~Buff0090222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0090222_H
