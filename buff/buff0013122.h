#ifndef BUFF0013122_H
#define BUFF0013122_H
#include "buff.h"

class Buff0013122 : public BuffC
{
public:
    Buff0013122() {}
    Buff0013122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 13122; }
    virtual ~Buff0013122() {}
};

#endif // BUFF0013122_H
