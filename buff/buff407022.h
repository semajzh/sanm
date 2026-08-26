#ifndef BUFF407022_H
#define BUFF407022_H
#include "buff.h"

class Buff407022 : public BuffR
{
public:
    Buff407022() {}
    Buff407022(int s, int d, int m) : BuffR(s, d, m) { id = 407022; }
    virtual ~Buff407022() {}
};

#endif // BUFF407022_H
