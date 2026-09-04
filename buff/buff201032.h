#ifndef BUFF201032_H
#define BUFF201032_H
#include "buff.h"

class Buff201032 : public BuffR
{
public:
    Buff201032() {}
    Buff201032(int s, int d, int m) : BuffR(s, d, m) { id = 201032; }
    virtual ~Buff201032() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF201032_H
