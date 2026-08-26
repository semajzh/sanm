#ifndef BUFF103021_H
#define BUFF103021_H
#include "buff.h"

class Buff103021 : public BuffR
{
public:
    Buff103021() {}
    Buff103021(int s, int d, int m) : BuffR(s, d, m) { id = 103021; }
    virtual ~Buff103021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float l2 = 0.0f;
};

#endif // BUFF103021_H
