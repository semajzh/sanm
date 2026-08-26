#ifndef BUFF201051_H
#define BUFF201051_H
#include "buff.h"

class Buff201051 : public BuffR
{
public:
    Buff201051() {}
    Buff201051(int s, int d, int m) : BuffR(s, d, m) { id = 201051; }
    virtual ~Buff201051() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF201051_H
