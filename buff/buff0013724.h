#ifndef BUFF0013724_H
#define BUFF0013724_H
#include "buff.h"

class Buff0013724 : public BuffC
{
public:
    Buff0013724() {}
    Buff0013724(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 13724; }
    virtual ~Buff0013724() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0013724_H
