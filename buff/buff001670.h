#ifndef BUFF001670_H
#define BUFF001670_H
#include "buff.h"

class Buff001670 : public BuffR
{
public:
    Buff001670() {}
    Buff001670(int s, int d, int m) : BuffR(s, d, m) { id = 1670; }
    virtual ~Buff001670() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k3 = 0.0f;
};

#endif // BUFF001670_H
