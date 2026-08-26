#ifndef BUFF301012_H
#define BUFF301012_H
#include "buff.h"

class Buff301012 : public BuffR
{
public:
    Buff301012() {}
    Buff301012(int s, int d, int m) : BuffR(s, d, m) { id = 301012; }
    virtual ~Buff301012() {}

    virtual void run(Ground* ground);
};

#endif // BUFF301012_H
