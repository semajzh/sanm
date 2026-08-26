#ifndef BUFF407011_H
#define BUFF407011_H
#include "buff.h"

class Buff407011 : public BuffR
{
public:
    Buff407011() {}
    Buff407011(int s, int d, int m) : BuffR(s, d, m) { id = 407011; }
    virtual ~Buff407011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
   float l1 = 0.0f;
};

#endif // BUFF407011_H
