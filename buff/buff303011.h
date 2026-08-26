#ifndef BUFF303011_H
#define BUFF303011_H
#include "buff.h"

class Buff303011 : public BuffR
{
public:
    Buff303011() {}
    Buff303011(int s, int d, int m) : BuffR(s, d, m) { id = 303011; }
    virtual ~Buff303011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF303011_H
