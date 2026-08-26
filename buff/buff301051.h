#ifndef BUFF301051_H
#define BUFF301051_H
#include "buff.h"

class Buff301051 : public BuffR
{
public:
    Buff301051() {}
    Buff301051(int s, int d, int m) : BuffR(s, d, m) { id = 301051; }
    virtual ~Buff301051() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j6 = 0.0f;
};

#endif // BUFF301051_H
