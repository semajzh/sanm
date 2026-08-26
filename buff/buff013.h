#ifndef BUFF013_H
#define BUFF013_H
#include "buff.h"

class Buff013 : public BuffC
{
public:
    Buff013() {}
    Buff013(int s, int d, int m, int r);
    virtual ~Buff013() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check101131(Ground* ground, int obj1, int obj2);
};

#endif // BUFF013_H
