#ifndef BUFF203011_H
#define BUFF203011_H
#include "buff.h"

class Buff203011 : public BuffR
{
public:
    Buff203011() {}
    Buff203011(int s, int d, int m) : BuffR(s, d, m) { id = 203011; }
    virtual ~Buff203011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float j9 = 0.0f;
};

#endif // BUFF203011_H
