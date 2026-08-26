#ifndef BUFF301031_H
#define BUFF301031_H
#include "buff.h"

class Buff301031 : public BuffR
{
public:
    Buff301031() {}
    Buff301031(int s, int d, int m) : BuffR(s, d, m) { id = 301031; }
    virtual ~Buff301031() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF301031_H
