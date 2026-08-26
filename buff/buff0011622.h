#ifndef BUFF0011622_H
#define BUFF0011622_H
#include "buff.h"

class Buff0011622 : public BuffC
{
public:
    Buff0011622() {}
    Buff0011622(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11622; }
    virtual ~Buff0011622() {}
};

#endif // BUFF0011622_H
