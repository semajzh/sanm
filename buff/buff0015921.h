#ifndef BUFF0015921_H
#define BUFF0015921_H
#include "buff.h"

class Buff0015921 : public BuffR
{
public:
    Buff0015921() {}
    Buff0015921(int s, int d, int m) : BuffR(s, d, m) { id = 15921; }
    virtual ~Buff0015921() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0015921_H
