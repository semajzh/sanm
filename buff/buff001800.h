#ifndef BUFF001800_H
#define BUFF001800_H
#include "buff.h"

class Buff001800 : public BuffR
{
public:
    Buff001800() {}
    Buff001800(int s, int d, int m) : BuffR(s, d, m) { id = 1800; }
    virtual ~Buff001800() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j11 = 0.0f;
};

#endif // BUFF001800_H
