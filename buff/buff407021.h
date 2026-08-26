#ifndef BUFF407021_H
#define BUFF407021_H
#include "buff.h"

class Buff407021 : public BuffR
{
public:
    Buff407021() {}
    Buff407021(int s, int d, int m) : BuffR(s, d, m) { id = 407021; }
    virtual ~Buff407021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    virtual void run(Ground* ground, int obj);

private:
   float k2 = 0.0f;
};

#endif // BUFF407021_H
