#ifndef BUFF216011_H
#define BUFF216011_H
#include "buff.h"

class Buff216011 : public BuffR
{
public:
    Buff216011() {}
    Buff216011(int s, int d, int m) : BuffR(s, d, m) { id = 216011; }
    virtual ~Buff216011() {}
};

#endif // BUFF216011_H
