#ifndef BUFF015_H
#define BUFF015_H
#include "buff.h"

class Buff015 : public BuffC
{
public:
    Buff015() {}
    Buff015(int s, int d, int m, int r);
    virtual ~Buff015() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF015_H
