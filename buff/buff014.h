#ifndef BUFF014_H
#define BUFF014_H
#include "buff.h"

class Buff014 : public BuffC
{
public:
    Buff014() {}
    Buff014(int s, int d, int m, int r);
    virtual ~Buff014() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF014_H
