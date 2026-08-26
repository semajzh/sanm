#ifndef BUFF0030221_H
#define BUFF0030221_H
#include "buff.h"

class Buff0030221 : public BuffR
{
public:
    Buff0030221() {}
    Buff0030221(int s, int d, int m) : BuffR(s, d, m) { id = 30221; }
    virtual ~Buff0030221() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0030221_H
