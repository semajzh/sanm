#ifndef BUFF0011822_H
#define BUFF0011822_H
#include "buff.h"

class Buff0011822 : public BuffC
{
public:
    Buff0011822() {}
    Buff0011822(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11822; }
    virtual ~Buff0011822() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0011822_H
