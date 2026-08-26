#ifndef BUFF0020820_H
#define BUFF0020820_H
#include "buff.h"

class Buff0020820 : public BuffR
{
public:
    Buff0020820() {}
    Buff0020820(int s, int d, int m) : BuffR(s, d, m) { id = 20820; }
    virtual ~Buff0020820() {}
    virtual void run(Ground* ) {}

    void run(Ground* ground, int type);

private:
    int count[2] = {0};
};

#endif // BUFF0020820_H
