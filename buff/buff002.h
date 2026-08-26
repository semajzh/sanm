#ifndef BUFF002_H
#define BUFF002_H
#include "buff.h"

class Buff002 : public BuffC
{
public:
    Buff002() {}
    Buff002(int s, int d, int m, int r);
    virtual ~Buff002() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check2100121(Ground* ground, int obj1, int obj2);
};

#endif // BUFF002_H
