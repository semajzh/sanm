#ifndef BUFF406011_H
#define BUFF406011_H
#include "buff.h"

class Buff406011 : public BuffR
{
public:
    Buff406011() {}
    Buff406011(int s, int d, int m) : BuffR(s, d, m) { id = 406011; }
    virtual ~Buff406011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float k0 = 0.0f;
   float i3 = 0.0f;
};

#endif // BUFF406011_H
