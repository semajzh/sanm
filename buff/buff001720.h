#ifndef BUFF001720_H
#define BUFF001720_H
#include "buff.h"

class Buff001720 : public BuffC
{
public:
    Buff001720() {}
    Buff001720(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1720; }
    virtual ~Buff001720() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k5 = 0.0f;
};

#endif // BUFF001720_H
