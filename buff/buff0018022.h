#ifndef BUFF0018022_H
#define BUFF0018022_H
#include "buff.h"

class Buff0018022 : public BuffC
{
public:
    Buff0018022() {}
    Buff0018022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 18022; }
    virtual ~Buff0018022() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF0018022_H
