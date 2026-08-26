#ifndef BUFF001320_H
#define BUFF001320_H
#include "buff.h"

class Buff001320 : public BuffR
{
public:
    Buff001320() {}
    Buff001320(int s, int d, int m) : BuffR(s, d, m) { id = 1320; }
    virtual ~Buff001320() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k0 = 0.0f;
};

#endif // BUFF001320_H
