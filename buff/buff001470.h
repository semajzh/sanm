#ifndef BUFF001470_H
#define BUFF001470_H
#include "buff.h"

class Buff001470 : public BuffR
{
public:
    Buff001470() {}
    Buff001470(int s, int d, int m) : BuffR(s, d, m) { id = 1470; }
    virtual ~Buff001470() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF001470_H
