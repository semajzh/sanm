#ifndef BUFF001350_H
#define BUFF001350_H
#include "buff.h"

class Buff001350 : public BuffR
{
public:
    Buff001350() {}
    Buff001350(int s, int d, int m) : BuffR(s, d, m) { id = 1350; }
    virtual ~Buff001350() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001350_H
