#ifndef BUFF001430_H
#define BUFF001430_H
#include "buff.h"

class Buff001430 : public BuffR
{
public:
    Buff001430() {}
    Buff001430(int s, int d, int m) : BuffR(s, d, m) { id = 1430; }
    virtual ~Buff001430() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001430_H
