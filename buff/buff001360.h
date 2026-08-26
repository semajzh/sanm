#ifndef BUFF001360_H
#define BUFF001360_H
#include "buff.h"

class Buff001360 : public BuffR
{
public:
    Buff001360() {}
    Buff001360(int s, int d, int m) : BuffR(s, d, m) { id = 1360; }
    virtual ~Buff001360() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l1 = 0.0f;
};

#endif // BUFF001360_H
