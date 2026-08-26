#ifndef BUFF0011121_H
#define BUFF0011121_H
#include "buff.h"

class Buff0011121 : public BuffC
{
public:
    Buff0011121() {}
    Buff0011121(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11121; }
    virtual ~Buff0011121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j7 = 0.0f;
};

#endif // BUFF0011121_H
