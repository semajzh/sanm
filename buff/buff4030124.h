#ifndef BUFF4030124_H
#define BUFF4030124_H
#include "buff.h"

class Buff4030124 : public BuffC
{
public:
    Buff4030124() {}
    Buff4030124(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4030124; }
    virtual ~Buff4030124() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j9 = 0.0f;
};

#endif // BUFF4030124_H
