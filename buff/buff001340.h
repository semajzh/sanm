#ifndef BUFF001340_H
#define BUFF001340_H
#include "buff.h"

class Buff001340 : public BuffC
{
public:
    Buff001340() {}
    Buff001340(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1340; }
    virtual ~Buff001340() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF001340_H
