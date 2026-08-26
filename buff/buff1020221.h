#ifndef BUFF1020221_H
#define BUFF1020221_H
#include "buff.h"

class Buff10202211 : public BuffR
{
public:
    Buff10202211() {}
    Buff10202211(int s, int d, int m) : BuffR(s, d, m) { id = 10202211; }
    virtual ~Buff10202211() {}

    virtual void run(Ground* ground);

private:
    bool check017(Ground* ground, int obj);
};

class Buff10202212 : public BuffR
{
public:
    Buff10202212() {}
    Buff10202212(int s, int d, int m) : BuffR(s, d, m) { id = 10202212; }
    virtual ~Buff10202212() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj, float& point);
};

#endif // BUFF1020221_H
