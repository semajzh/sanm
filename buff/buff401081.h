#ifndef BUFF401081_H
#define BUFF401081_H
#include "buff.h"

class Buff401081 : public BuffR
{
public:
    Buff401081() {}
    Buff401081(int s, int d, int m) : BuffR(s, d, m) { id = 401081; }
    virtual ~Buff401081() {}
};

#endif // BUFF401081_H
