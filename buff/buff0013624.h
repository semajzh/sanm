#ifndef BUFF0013624_H
#define BUFF0013624_H
#include "buff.h"

class Buff0013624 : public BuffC
{
public:
    Buff0013624() {}
    Buff0013624(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 13624; }
    virtual ~Buff0013624() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j4 = 0.0f;
};

#endif // BUFF0013624_H
