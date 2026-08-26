#ifndef BUFF001290_H
#define BUFF001290_H
#include "buff.h"

class Buff001290 : public BuffR
{
public:
    Buff001290() {}
    Buff001290(int s, int d, int m) : BuffR(s, d, m) { id = 1290; }
    virtual ~Buff001290() {}

    virtual void run(Ground* ground);
};

class Buff0012902 : public BuffC
{
public:
    Buff0012902() {}
    Buff0012902(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 12902; }
    virtual ~Buff0012902() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF001290_H
