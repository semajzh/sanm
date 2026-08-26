#ifndef BUFF2010121_H
#define BUFF2010121_H
#include "buff.h"

class Buff2010222 : public BuffC
{
public:
    Buff2010222() {}
    Buff2010222(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 2010222; }
    virtual ~Buff2010222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF2010121_H
