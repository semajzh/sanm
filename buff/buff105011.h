#ifndef BUFF105011_H
#define BUFF105011_H
#include "buff.h"

class Buff105011 : public BuffR
{
public:
    Buff105011() {}
    Buff105011(int s, int d, int m) : BuffR(s, d, m) { id = 105011; }
    virtual ~Buff105011() {}
};

#endif // BUFF105011_H
