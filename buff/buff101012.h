#ifndef BUFF101012_H
#define BUFF101012_H
#include "buff.h"

class Buff101012 : public BuffR
{
public:
    Buff101012() {}
    Buff101012(int s, int d, int m) : BuffR(s, d, m) { id = 101012; }
    virtual ~Buff101012() {}

    virtual void run(Ground* ground);

private:
    int round = 0;
    int count = 0;
};

class Buff1010122 : public BuffC
{
public:
    Buff1010122() {}
    Buff1010122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1010122; }
    virtual ~Buff1010122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int getMaxiIndex(Ground* ground, int obj);
    float i[4] = {0};
};

#endif // BUFF101012_H
