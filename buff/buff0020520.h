#ifndef BUFF0020520_H
#define BUFF0020520_H
#include "buff.h"

class Buff0020520 : public BuffR
{
public:
    Buff0020520() {}
    Buff0020520(int s, int d, int m) : BuffR(s, d, m) { id = 20520; }
    virtual ~Buff0020520() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k0 = 0.0f;
    float j5 = 0.0f;
};

#endif // BUFF0020520_H
