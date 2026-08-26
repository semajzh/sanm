#ifndef BUFF203021_H
#define BUFF203021_H
#include "buff.h"

class Buff203021 : public BuffR
{
public:
    Buff203021() {}
    Buff203021(int s, int d, int m) : BuffR(s, d, m) { id = 203021; }
    virtual ~Buff203021() {}
};

#endif // BUFF203021_H
