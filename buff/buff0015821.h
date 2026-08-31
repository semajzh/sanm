#ifndef BUFF0015821_H
#define BUFF0015821_H
#include "buff.h"

class Buff0015821 : public BuffR
{
public:
    Buff0015821() {}
    Buff0015821(int s, int d, int m) : BuffR(s, d, m) { id = 15821; }
    virtual ~Buff0015821() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0015821_H
