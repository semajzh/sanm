#ifndef BUFF0011522_H
#define BUFF0011522_H
#include "buff.h"

class Buff0011522 : public BuffC
{
public:
    Buff0011522() {}
    Buff0011522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 11522; }
    virtual ~Buff0011522() {}
};

#endif // BUFF0011522_H
