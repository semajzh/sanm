#ifndef BUFF005_H
#define BUFF005_H
#include "buff.h"

class Buff005 : public BuffC
{
public:
    Buff005() {}
    Buff005(int s, int d, int m, int r);
    virtual ~Buff005() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check401101(Ground* ground, int obj);
};

#endif // BUFF005_H
