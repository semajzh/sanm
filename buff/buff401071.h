#ifndef BUFF401071_H
#define BUFF401071_H
#include "buff.h"

class Buff401071 : public BuffR
{
public:
    Buff401071() {}
    Buff401071(int s, int d, int m) : BuffR(s, d, m) { id = 401071; }
    virtual ~Buff401071() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j11 = 0.0f;
    float j12 = 0.0f;
};

#endif // BUFF401071_H
