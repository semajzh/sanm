#ifndef BUFF402022_H
#define BUFF402022_H
#include "buff.h"

class Buff402022 : public BuffR
{
public:
    Buff402022() {}
    Buff402022(int s, int d, int m) : BuffR(s, d, m) { id = 402022; }
    virtual ~Buff402022() {}
};

#endif // BUFF402022_H
