#ifndef BUFF001330_H
#define BUFF001330_H
#include "buff.h"

class Buff001330 : public BuffR
{
public:
    Buff001330() {}
    Buff001330(int s, int d, int m) : BuffR(s, d, m) { id = 1330; }
    virtual ~Buff001330() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001330_H
