#ifndef BUFF0012522_H
#define BUFF0012522_H
#include "buff.h"

class Buff0012522 : public BuffC
{
public:
    Buff0012522() {}
    Buff0012522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 12522; }
    virtual ~Buff0012522() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF0012522_H
