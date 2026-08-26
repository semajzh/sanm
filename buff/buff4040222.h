#ifndef BUFF4040222_H
#define BUFF4040222_H
#include "buff.h"

class Buff4040222 : public BuffC
{
public:
    Buff4040222() {}
    Buff4040222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4040222; }
    virtual ~Buff4040222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j4 = 0.0f;
};

#endif // BUFF4040222_H
