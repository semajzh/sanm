#ifndef BUFF0011322_H
#define BUFF0011322_H
#include "buff.h"

class Buff0011322 : public BuffC
{
public:
    Buff0011322() {}
    Buff0011322(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11322; }
    virtual ~Buff0011322() {}
};

#endif // BUFF0011322_H
