#ifndef BUFF500001_H
#define BUFF500001_H
#include "buff.h"

class Buff500001 : public BuffR
{
public:
    Buff500001() {}
    Buff500001(int s, int d, int m) : BuffR(s, d, m) { id = 500001; }
    virtual ~Buff500001() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float j0 = 0.0f;
    float j7 = 0.0f;
};

#endif // BUFF500001_H
