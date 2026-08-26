#ifndef BUFF208011_H
#define BUFF208011_H
#include "buff.h"

class Buff208011 : public BuffR
{
public:
    Buff208011() {}
    Buff208011(int s, int d, int m) : BuffR(s, d, m) { id = 208011; }
    virtual ~Buff208011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k0[3] = {0};
    float l0[3] = {0};
};

#endif // BUFF208011_H
