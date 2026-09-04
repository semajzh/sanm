#ifndef BUFF216012_H
#define BUFF216012_H
#include "buff.h"

class Buff216012 : public BuffR
{
public:
    Buff216012() {}
    Buff216012(int s, int d, int m) : BuffR(s, d, m) { id = 216012; }
    virtual ~Buff216012() {}

    virtual void run(Ground* ground);
};

class Buff2160122 : public BuffC
{
public:
    Buff2160122() {}
    Buff2160122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2160122; }
    virtual ~Buff2160122() {}
};

#endif // BUFF216012_H
