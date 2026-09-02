#ifndef BUFF0016720_H
#define BUFF0016720_H
#include "buff.h"

class Buff0016720 : public BuffR
{
public:
    Buff0016720() {}
    Buff0016720(int s, int d, int m) : BuffR(s, d, m) { id = 16720; }
    virtual ~Buff0016720() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l3 = 0.0f;
};

#endif // BUFF0016720_H
