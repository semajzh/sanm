#ifndef BUFF312011_H
#define BUFF312011_H
#include "buff.h"

class Buff312011 : public BuffR
{
public:
    Buff312011() {}
    Buff312011(int s, int d, int m) : BuffR(s, d, m) { id = 312011; }
    virtual ~Buff312011() {}

    virtual void  run(Ground* ground);
};

#endif // BUFF312011_H
