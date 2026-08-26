#ifndef BUFF001710_H
#define BUFF001710_H
#include "buff.h"

class Buff001710 : public BuffR
{
public:
    Buff001710() {}
    Buff001710(int s, int d, int m) : BuffR(s, d, m) { id = 1710; }
    virtual ~Buff001710() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k5 = 0.0f;
};

#endif // BUFF001710_H
