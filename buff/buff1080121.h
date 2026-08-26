#ifndef BUFF1080121_H
#define BUFF1080121_H
#include "buff.h"

class Buff1080121 : public BuffR
{
public:
    Buff1080121() {}
    Buff1080121(int s, int d, int m) : BuffR(s, d, m) { id = 1080121; }
    virtual ~Buff1080121() {}

    virtual void exit(Ground* );
    virtual void run(Ground* );
    bool run(Ground* ground, int obj);

private:
    int xj = 0;
    float k2 = 0.0f;
    void addxj(Ground* ground);
};

#endif // BUFF1080121_H
