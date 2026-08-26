#ifndef BUFF0013822_H
#define BUFF0013822_H
#include "buff.h"

class Buff0013822 : public BuffC
{
public:
    Buff0013822() {}
    Buff0013822(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 13822; }
    virtual ~Buff0013822() {}
};

#endif // BUFF0013822_H
