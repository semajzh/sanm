#ifndef BUFF011_H
#define BUFF011_H
#include "buff.h"

class Buff011 : public BuffC
{
public:
    Buff011() {}
    Buff011(int s, int d, int m, int r);
    virtual ~Buff011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
};

#endif // BUFF011_H
