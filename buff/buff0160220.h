#ifndef BUFF0160220_H
#define BUFF0160220_H
#include "buff.h"

class Buff0160220 : public BuffR
{
public:
    Buff0160220() {}
    Buff0160220(int s, int d, int m) : BuffR(s, d, m) { id = 160220; }
    virtual ~Buff0160220() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0160220_H
