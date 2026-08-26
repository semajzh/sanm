#ifndef BUFF0040322_H
#define BUFF0040322_H
#include "buff.h"

class Buff0040322 : public BuffC
{
public:
    Buff0040322() {}
    Buff0040322(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40322; }
    virtual ~Buff0040322() {}
};

#endif // BUFF0040322_H
