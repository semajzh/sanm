#ifndef BUFF001400_H
#define BUFF001400_H
#include "buff.h"

class Buff001400 : public BuffR
{
public:
    Buff001400() {}
    Buff001400(int s, int d, int m) : BuffR(s, d, m) { id = 1400; }
    virtual ~Buff001400() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float  i2 = 0.0f;
};

#endif // BUFF001400_H
