#ifndef BUFF0110222_H
#define BUFF0110222_H
#include "buff.h"

class Buff0110222 : public BuffC
{
public:
    Buff0110222() {}
    Buff0110222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 110222; }
    virtual ~Buff0110222() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k1 = 0.0f;
};

#endif // BUFF0110222_H
