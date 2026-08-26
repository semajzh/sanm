#ifndef BUFF001680_H
#define BUFF001680_H
#include "buff.h"

class Buff001680 : public BuffC
{
public:
    Buff001680() {}
    Buff001680(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1680; }
    virtual ~Buff001680() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k3 = 0.0f;
};

#endif // BUFF001680_H
