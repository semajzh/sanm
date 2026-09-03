#ifndef BUFF023_H
#define BUFF023_H
#include "buff.h"

class Buff023 : public BuffC
{
public:
    Buff023() {}
    Buff023(int s, int d, int m, int r) : BuffC(s, d, m, r)  { id = 23; };
    virtual ~Buff023() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    bool check2100121(Ground* ground, int obj);
    int count = 0;
};

#endif // BUFF023_H
