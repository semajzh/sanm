#ifndef BUFF315021_H
#define BUFF315021_H
#include "buff.h"

class Buff315021 : public BuffR
{
public:
    Buff315021() {}
    Buff315021(int s, int d, int m) : BuffR(s, d, m) { id = 315021; }
    virtual ~Buff315021() {}
};

#endif // BUFF315021_H
