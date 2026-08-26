#ifndef BUFF1040121_H
#define BUFF1040121_H
#include "buff.h"

class Buff1040121 : public BuffR
{
public:
    Buff1040121() {}
    Buff1040121(int s, int d, int m) : BuffR(s, d, m) { id = 1040121; }
    virtual ~Buff1040121() {}

    virtual void run(Ground* ground);
    void run(Ground* ground, int );
};

class Buff10401212 : public BuffR
{
public:
    Buff10401212() {}
    Buff10401212(int s, int d, int m) : BuffR(s, d, m) { id = 10401212; }
    virtual ~Buff10401212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF1040121_H
