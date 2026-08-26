#ifndef BUFF301141_H
#define BUFF301141_H
#include "buff.h"

class Buff301141 : public BuffR
{
public:
    Buff301141() {}
    Buff301141(int s, int d, int m) : BuffR(s, d, m) { id = 301141; }
    virtual ~Buff301141() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF301141_H
