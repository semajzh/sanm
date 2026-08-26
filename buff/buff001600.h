#ifndef BUFF001600_H
#define BUFF001600_H
#include "buff.h"

class Buff001600 : public BuffR
{
public:
    Buff001600() {}
    Buff001600(int s, int d, int m) : BuffR(s, d, m) { id = 1600; }
    virtual ~Buff001600() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j0 = 0.0f;
};

#endif // BUFF001600_H
