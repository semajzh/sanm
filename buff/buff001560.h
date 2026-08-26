#ifndef BUFF001560_H
#define BUFF001560_H
#include "buff.h"

class Buff001560 : public BuffR
{
public:
    Buff001560() {}
    Buff001560(int s, int d, int m) : BuffR(s, d, m) { id = 1560; }
    virtual ~Buff001560() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l1 = 0.0f;
};

#endif // BUFF001560_H
