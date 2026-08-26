#ifndef BUFF1140224_H
#define BUFF1140224_H
#include "buff.h"

class Buff1140224 : public BuffC
{
public:
    Buff1140224() {}
    Buff1140224(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1140224; }
    virtual ~Buff1140224() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float k0 = 0.0f;
};

#endif // BUFF1140224_H
