#ifndef BUFF0020120_H
#define BUFF0020120_H
#include "buff.h"

class Buff0020120 : public BuffR
{
public:
    Buff0020120() {}
    Buff0020120(int s, int d, int m) : BuffR(s, d, m) { id = 20120; }
    virtual ~Buff0020120() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j0 = 0.0f;
};

#endif // BUFF0020120_H
