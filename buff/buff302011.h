#ifndef BUFF302011_H
#define BUFF302011_H
#include "buff.h"

class Buff302011 : public BuffC
{
public:
    Buff302011() {}
    Buff302011(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 302011; }
    virtual ~Buff302011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
    void run(Ground* ground, int obj);
};

#endif // BUFF302011_H
