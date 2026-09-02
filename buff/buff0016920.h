#ifndef BUFF0016920_H
#define BUFF0016920_H
#include "buff.h"

class Buff0016920 : public BuffR
{
public:
    Buff0016920() {}
    Buff0016920(int s, int d, int m) : BuffR(s, d, m) { id = 16920; }
    virtual ~Buff0016920() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF0016920_H
