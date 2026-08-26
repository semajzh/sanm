#ifndef BUFF401021_H
#define BUFF401021_H
#include "buff.h"

class Buff401021 : public BuffC
{
public:
    Buff401021() {}
    Buff401021(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401021; }
    virtual ~Buff401021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF401021_H
