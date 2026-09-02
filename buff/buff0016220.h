#ifndef BUFF0016220_H
#define BUFF0016220_H
#include "buff.h"

class Buff0016220 : public BuffR
{
public:
    Buff0016220() {}
    Buff0016220(int s, int d, int m) : BuffR(s, d, m) { id = 16220; }
    virtual ~Buff0016220() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
};

#endif // BUFF0016220_H
