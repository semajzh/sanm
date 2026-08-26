#ifndef BUFF401091_H
#define BUFF401091_H
#include "buff.h"

class Buff401091 : public BuffR
{
public:
    Buff401091() {}
    Buff401091(int s, int d, int m) : BuffR(s, d, m) { id = 401091; }
    virtual ~Buff401091() {}
};

#endif // BUFF401091_H
