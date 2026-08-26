#ifndef BUFF0150120_H
#define BUFF0150120_H
#include "buff.h"

class Buff0150120 : public BuffR
{
public:
    Buff0150120() {}
    Buff0150120(int s, int d, int m) : BuffR(s, d, m) { id = 150120; }
    virtual ~Buff0150120() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
    int count = 0;
    float k0 = 0.0f;
    float i[4] = {0};
};

#endif // BUFF0150120_H
