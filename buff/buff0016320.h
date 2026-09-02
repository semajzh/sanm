#ifndef BUFF0016320_H
#define BUFF0016320_H
#include "buff.h"

class Buff0016320 : public BuffR
{
public:
    Buff0016320() {}
    Buff0016320(int s, int d, int m) : BuffR(s, d, m) { id = 16320; }
    virtual ~Buff0016320() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0016320_H
