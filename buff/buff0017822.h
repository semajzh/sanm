#ifndef BUFF0017822_H
#define BUFF0017822_H
#include "buff.h"

class Buff0017822 : public BuffC
{
public:
    Buff0017822() {}
    Buff0017822(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17822; }
    virtual ~Buff0017822() {}
};

#endif // BUFF0017822_H
