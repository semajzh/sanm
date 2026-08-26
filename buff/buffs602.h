#ifndef BUFFS602_H
#define BUFFS602_H
#include "buff.h"

class BuffS602 : public BuffR
{
public:
    BuffS602() {}
    BuffS602(int s, int d, int m) : BuffR(s, d, m) { id = 602; }
    virtual ~BuffS602() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
    float check(Ground* );

private:
    int round = 0;
    bool enable = true;
};

#endif // BUFFS602_H
