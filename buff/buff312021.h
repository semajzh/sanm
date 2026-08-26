#ifndef BUFF312021_H
#define BUFF312021_H
#include "buff.h"

class Buff312021 : public BuffR
{
public:
    Buff312021() {}
    Buff312021(int s, int d, int m) : BuffR(s, d, m) { id = 312021; }
    virtual ~Buff312021() {}
};

#endif // BUFF312021_H
