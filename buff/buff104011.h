#ifndef BUFF104011_H
#define BUFF104011_H
#include "buff.h"

class Buff104011 : public BuffR
{
public:
    Buff104011() {}
    Buff104011(int s, int d, int m) : BuffR(s, d, m) { id = 104011; }
    virtual ~Buff104011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF104011_H
