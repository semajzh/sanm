#ifndef BUFF202021_H
#define BUFF202021_H
#include "buff.h"

class Buff202021 : public BuffC
{
public:
    Buff202021() {}
    Buff202021(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 202021; }
    virtual ~Buff202021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k1 = 0.0f;
};

#endif // BUFF202021_H
