#ifndef BUFF001010_H
#define BUFF001010_H
#include "buff.h"

class Buff001010 : public BuffR
{
public:
    Buff001010() {}
    Buff001010(int s, int d, int m) : BuffR(s, d, m) { id = 1010; }
    virtual ~Buff001010() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k2 = 0.0f;
};

#endif // BUFF001010_H
