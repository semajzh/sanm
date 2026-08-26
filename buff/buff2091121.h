#ifndef BUFF2091121_H
#define BUFF2091121_H
#include "buff.h"

class Buff2091121 : public BuffC
{
public:
    Buff2091121() {}
    Buff2091121(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2091121; }
    virtual ~Buff2091121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    bool run(Ground* ground, int& obj, float& point);

private:
    float j7 = 0.0f;
};

#endif // BUFF2091121_H
