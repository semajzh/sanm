#ifndef BUFF0020222_H
#define BUFF0020222_H
#include "buff.h"

class Buff0020222 : public BuffC
{
public:
    Buff0020222() {}
    Buff0020222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 20222; }
    virtual ~Buff0020222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0020222_H
