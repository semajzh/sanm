#ifndef BUFF413021_H
#define BUFF413021_H
#include "buff.h"

class Buff413021 : public BuffR
{
public:
    Buff413021() {}
    Buff413021(int s, int d, int m) : BuffR(s, d, m) { id = 413021; }
    virtual ~Buff413021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF413021_H
