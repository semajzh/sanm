#ifndef BUFF301071_H
#define BUFF301071_H
#include "buff.h"

class Buff301071 : public BuffR
{
public:
    Buff301071() {}
    Buff301071(int s, int d, int m) : BuffR(s, d, m) { id = 301071; }
    virtual ~Buff301071() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int round = 0;
    float l0 = 0.0f;
};

#endif // BUFF301071_H
