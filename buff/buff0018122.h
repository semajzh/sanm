#ifndef BUFF0018122_H
#define BUFF0018122_H
#include "buff.h"

class Buff0018122 : public BuffC
{
public:
    Buff0018122() {}
    Buff0018122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 18122; }
    virtual ~Buff0018122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF0018122_H
