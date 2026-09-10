#ifndef BUFF001860_H
#define BUFF001860_H
#include "buff.h"

class Buff001860 : public BuffR
{
public:
    Buff001860() {}
    Buff001860(int s, int d, int m) : BuffR(s, d, m) { id = 1860; }
    virtual ~Buff001860() {}

    virtual void run(Ground* ground);
};

#endif // BUFF001860_H
