#ifndef BUFF404011_H
#define BUFF404011_H
#include "buff.h"

class Buff404011 : public BuffC
{
public:
    Buff404011() {}
    Buff404011(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 404011; }
    virtual ~Buff404011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float l1 = 0.0f;
};

#endif // BUFF404011_H
