#ifndef BUFF102011_H
#define BUFF102011_H
#include "buff.h"

class Buff102011 : public BuffR
{
public:
    Buff102011() {}
    Buff102011(int s, int d, int m) : BuffR(s, d, m) { id = 102011; }
    virtual ~Buff102011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF102011_H
