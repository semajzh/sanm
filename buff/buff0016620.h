#ifndef BUFF0016620_H
#define BUFF0016620_H
#include "buff.h"

class Buff0016620 : public BuffR
{
public:
    Buff0016620() {}
    Buff0016620(int s, int d, int m) : BuffR(s, d, m) { id = 16620; }
    virtual ~Buff0016620() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, float point);
};

#endif // BUFF0016620_H
