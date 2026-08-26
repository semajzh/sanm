#ifndef BUFF004_H
#define BUFF004_H
#include "buff.h"

class Buff004 : public BuffC
{
public:
    Buff004() {}
    Buff004(int s, int d, int m, int r);
    virtual ~Buff004() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float i2 = 0.0f;
};

#endif // BUFF004_H
