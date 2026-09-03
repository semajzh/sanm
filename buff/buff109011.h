#ifndef BUFF109011_H
#define BUFF109011_H
#include "buff.h"

class Buff109011 : public BuffR
{
public:
    Buff109011() {}
    Buff109011(int s, int d, int m) : BuffR(s, d, m) { id = 109011; }
    virtual ~Buff109011() {}
};

#endif // BUFF109011_H
