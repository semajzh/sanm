#ifndef BUFF1010821_H
#define BUFF1010821_H
#include "buff.h"

class Buff10108211 : public BuffR
{
public:
    Buff10108211() {}
    Buff10108211(int s, int d, int m) : BuffR(s, d, m) { id = 10108211; }
    virtual ~Buff10108211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j2 = 0.0f;
    float j14 = 0.0f;
};

class Buff10108212 : public BuffR
{
public:
    Buff10108212() {}
    Buff10108212(int s, int d, int m) : BuffR(s, d, m) { id = 10108212; }
    virtual ~Buff10108212() {}

    virtual void run(Ground* ) {}
    bool run(Ground* ground, float &point);
};

#endif // BUFF1010821_H
