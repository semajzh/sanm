#ifndef BUFF217021_H
#define BUFF217021_H
#include "buff.h"

class Buff2170211 : public BuffR
{
public:
    Buff2170211() {}
    Buff2170211(int s, int d, int m) : BuffR(s, d, m) { id = 2170211; }
    virtual ~Buff2170211() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int obj);

private:
    bool check21702212(Ground* ground, int obj);
};

class Buff2170212 : public BuffR
{
public:
    Buff2170212() {}
    Buff2170212(int s, int d, int m) : BuffR(s, d, m) { id = 2170212; }
    virtual ~Buff2170212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF217021_H
