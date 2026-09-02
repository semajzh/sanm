#ifndef BUFF0016020_H
#define BUFF0016020_H
#include "buff.h"

class Buff0016020 : public BuffR
{
public:
    Buff0016020() {}
    Buff0016020(int s, int d, int m) : BuffR(s, d, m) { id = 16020; }
    virtual ~Buff0016020() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF0016020_H
