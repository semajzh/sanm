#ifndef BUFF0014720_H
#define BUFF0014720_H
#include "buff.h"

class Buff0014720 : public BuffR
{
public:
    Buff0014720() {}
    Buff0014720(int s, int d, int m) : BuffR(s, d, m) { id = 14720; }
    virtual ~Buff0014720() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j13 = 0.0f;
    float k0 = 0.0f;
};

#endif // BUFF0014720_H
