#ifndef BUFF406021_H
#define BUFF406021_H
#include "buff.h"

class Buff406021 : public BuffC
{
public:
    Buff406021() {}
    Buff406021(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 406021; }
    virtual ~Buff406021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float l0 = 0.0f;
};

#endif // BUFF406021_H
