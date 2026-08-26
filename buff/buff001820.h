#ifndef BUFF001820_H
#define BUFF001820_H
#include "buff.h"

class Buff001820 : public BuffR
{
public:
    Buff001820() {}
    Buff001820(int s, int d, int m) : BuffR(s, d, m) { id = 1820; }
    virtual ~Buff001820() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ground);

private:
    float j12 = 0.0;
};

#endif // BUFF001820_H
