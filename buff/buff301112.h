#ifndef BUFF301112_H
#define BUFF301112_H
#include "buff.h"

class Buff301112 : public BuffR
{
public:
    Buff301112() {}
    Buff301112(int s, int d, int m) : BuffR(s, d, m) { id = 301112; }
    virtual ~Buff301112() {}
    virtual void run(Ground* ground);
};

#endif // BUFF301112_H
