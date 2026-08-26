#ifndef BUFF0014521_H
#define BUFF0014521_H
#include "buff.h"

class Buff0014521 : public BuffR
{
public:
    Buff0014521() {}
    Buff0014521(int s, int d, int m) : BuffR(s, d, m) { id = 14521; }
    virtual ~Buff0014521() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF0014521_H
