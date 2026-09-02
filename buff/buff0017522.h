#ifndef BUFF0017522_H
#define BUFF0017522_H
#include "buff.h"

class Buff0017522 : public BuffC
{
public:
    Buff0017522() {}
    Buff0017522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 17522; }
    virtual ~Buff0017522() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i3 = 0.0f;
};

#endif // BUFF0017522_H
