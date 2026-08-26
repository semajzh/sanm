#ifndef BUFF001020_H
#define BUFF001020_H
#include "buff.h"

class Buff001020 : public BuffR
{
public:
    Buff001020() {}
    Buff001020(int s, int d, int m) : BuffR(s, d, m) { id = 1020; }
    virtual ~Buff001020() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k2 = 0.0f;
    int count = 0;
};

#endif // BUFF001020_H
