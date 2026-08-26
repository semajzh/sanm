#ifndef BUFF110011_H
#define BUFF110011_H
#include "buff.h"

class Buff110011 : public BuffR
{
public:
    Buff110011() {}
    Buff110011(int s, int d, int m) : BuffR(s, d, m) { id = 110011; }
    virtual ~Buff110011() {}

    virtual void run(Ground* );
};

#endif // BUFF110011_H
