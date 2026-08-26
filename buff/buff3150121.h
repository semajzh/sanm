#ifndef BUFF3150121_H
#define BUFF3150121_H
#include "buff.h"

class Buff3150121 : public BuffR
{
public:
    Buff3150121() {}
    Buff3150121(int s, int d, int m) : BuffR(s, d, m) { id = 3150121; }
    virtual ~Buff3150121() {}
};

#endif // BUFF3150121_H
