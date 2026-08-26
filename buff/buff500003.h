#ifndef BUFF500003_H
#define BUFF500003_H
#include "buff.h"

class Buff500003 : public BuffR
{
public:
    Buff500003() {}
    Buff500003(int s, int d, int m) : BuffR(s, d, m) { id = 500003; }
    virtual ~Buff500003() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF500003_H
