#ifndef BUFF0160122_H
#define BUFF0160122_H
#include "buff.h"

class Buff0160122 : public BuffC
{
public:
    Buff0160122() {}
    Buff0160122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 160122; }
    virtual ~Buff0160122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j9 = 0.0f;
};

#endif // BUFF0160122_H
