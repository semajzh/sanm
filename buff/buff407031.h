#ifndef BUFF407031_H
#define BUFF407031_H
#include "buff.h"

class Buff407031 : public BuffR
{
public:
    Buff407031() {}
    Buff407031(int s, int d, int m) : BuffR(s, d, m) { id = 407031; }
    virtual ~Buff407031() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
   float k0 = 0.0f;
};

#endif // BUFF407031_H
