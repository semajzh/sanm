#ifndef BUFF201052_H
#define BUFF201052_H
#include "buff.h"

class Buff201052 : public BuffR
{
public:
    Buff201052() {}
    Buff201052(int s, int d, int m) : BuffR(s, d, m) { id = 201052; }
    virtual ~Buff201052() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF201052_H
