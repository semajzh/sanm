#ifndef BUFF3180221_H
#define BUFF3180221_H
#include "buff.h"

class Buff3180221 : public BuffR
{
public:
    Buff3180221() {}
    Buff3180221(int s, int d, int m) : BuffR(s, d, m) { id = 3180221; }
    virtual ~Buff3180221() {}
    virtual void run(Ground* ground);
};

class Buff31802211 : public BuffC
{
public:
    Buff31802211() {}
    Buff31802211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 31802211; }
    virtual ~Buff31802211() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    int g2[3] = {0};
    int g3[3] = {0};
    int count = 0;
    float l0 = 0.0f;
};

#endif
