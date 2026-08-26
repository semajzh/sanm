#ifndef BUFF001370_H
#define BUFF001370_H
#include "buff.h"

class Buff001370 : public BuffC
{
public:
    Buff001370() {}
    Buff001370(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1370; }
    virtual ~Buff001370() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF001370_H
