#ifndef BUFF0014024_H
#define BUFF0014024_H
#include "buff.h"

class Buff0014024 : public BuffC
{
public:
    Buff0014024() {}
    Buff0014024(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 14024; }
    virtual ~Buff0014024() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i3 = 0.0f;
};

#endif // BUFF0014024_H
