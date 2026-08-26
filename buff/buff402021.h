#ifndef BUFF402021_H
#define BUFF402021_H
#include "buff.h"

class Buff402021 : public BuffR
{
public:
    Buff402021() {}
    Buff402021(int s, int d, int m) : BuffR(s, d, m) { id = 402021; }
    virtual ~Buff402021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF402021_H
