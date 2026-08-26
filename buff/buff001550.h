#ifndef BUFF001550_H
#define BUFF001550_H
#include "buff.h"

class Buff001550 : public BuffR
{
public:
    Buff001550() {}
    Buff001550(int s, int d, int m) : BuffR(s, d, m) { id = 1550; }
    virtual ~Buff001550() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k2 = 0.0f;
};

#endif // BUFF001550_H
