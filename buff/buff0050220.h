#ifndef BUFF0050220_H
#define BUFF0050220_H
#include "buff.h"

class Buff0050220 : public BuffR
{
public:
    Buff0050220() {}
    Buff0050220(int s, int d, int m) : BuffR(s, d, m) { id = 50220; }
    virtual ~Buff0050220() {}
    virtual void run(Ground* );
    void run(Ground* , int);

private:
    int round = 0;
};

class Buff00502202 : public BuffR
{
public:
    Buff00502202() {}
    Buff00502202(int s, int d, int m) : BuffR(s, d, m) { id = 502202; }
    virtual ~Buff00502202() {}
    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k2 = 0.0f;
};

#endif // BUFF0050220_H
