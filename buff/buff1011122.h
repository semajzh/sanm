#ifndef BUFF1011122_H
#define BUFF1011122_H
#include "buff.h"

class Buff1011122 : public BuffR
{
public:
    Buff1011122() {}
    Buff1011122(int s, int d, int m) : BuffR(s, d, m) { id = 1011122; }
    virtual ~Buff1011122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float j13 = 0.0f;
};

#endif // BUFF1011122_H
