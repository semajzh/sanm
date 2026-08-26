#ifndef BUFF001480_H
#define BUFF001480_H
#include "buff.h"

class Buff001480 : public BuffR
{
public:
    Buff001480() {}
    Buff001480(int s, int d, int m) : BuffR(s, d, m) { id = 1480; }
    virtual ~Buff001480() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k0 = 0.0f;
};

#endif // BUFF001480_H
