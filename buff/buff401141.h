#ifndef BUFF401141_H
#define BUFF401141_H
#include "buff.h"

class Buff401141 : public BuffR
{
public:
    Buff401141() {}
    Buff401141(int s, int d, int m) : BuffR(s, d, m) { id = 401141; }
    virtual ~Buff401141() {}
    virtual void run(Ground* ground);

private:
    bool first = true;
};

#endif // BUFF401141_H
