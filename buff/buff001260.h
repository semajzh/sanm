#ifndef BUFF001260_H
#define BUFF001260_H
#include "buff.h"

class Buff001260 : public BuffR
{
public:
    Buff001260() {}
    Buff001260(int s, int d, int m) : BuffR(s, d, m) { id = 1260; }
    virtual ~Buff001260() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF001260_H
