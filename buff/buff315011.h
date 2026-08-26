#ifndef BUFF315011_H
#define BUFF315011_H
#include "buff.h"

class Buff315011 : public BuffR
{
public:
    Buff315011() {}
    Buff315011(int s, int d, int m) : BuffR(s, d, m) { id = 315011; }
    virtual ~Buff315011() {}
};

#endif // BUFF315011_H
