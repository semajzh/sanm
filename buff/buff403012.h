#ifndef BUFF403012_H
#define BUFF403012_H
#include "buff.h"

class Buff403012 : public BuffR
{
public:
    Buff403012() {}
    Buff403012(int s, int d, int m) : BuffR(s, d, m) { id = 403012; }
    virtual ~Buff403012() {}
};

class Buff4030122 : public BuffR
{
public:
    Buff4030122() {}
    Buff4030122(int s, int d, int m) : BuffR(s, d, m) { id = 4030122; }
    virtual ~Buff4030122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
    float i1 = 0.0f;
};

#endif // BUFF403012_H
