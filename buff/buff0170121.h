#ifndef BUFF0170121_H
#define BUFF0170121_H
#include "buff.h"

class Buff0170121 : public BuffR
{
public:
    Buff0170121() {}
    Buff0170121(int s, int d, int m) : BuffR(s, d, m) { id = 170121; }
    virtual ~Buff0170121() {}

    virtual void run(Ground* ) {}
    bool run(Ground* ground, float& point);
    void run(Ground* ground, int );

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF0170121_H
