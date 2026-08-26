#ifndef BUFF001460_H
#define BUFF001460_H
#include "buff.h"

class Buff001460 : public BuffR
{
public:
    Buff001460() {}
    Buff001460(int s, int d, int m) : BuffR(s, d, m) { id = 1460; }
    virtual ~Buff001460() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001460_H
