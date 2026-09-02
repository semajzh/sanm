#ifndef BUFF0016820_H
#define BUFF0016820_H
#include "buff.h"

class Buff0016820 : public BuffR
{
public:
    Buff0016820() {}
    Buff0016820(int s, int d, int m) : BuffR(s, d, m) { id = 16820; }
    virtual ~Buff0016820() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0016820_H
