#ifndef BUFF0088224_H
#define BUFF0088224_H
#include "buff.h"

class Buff0088224 : public BuffR
{
public:
    Buff0088224() {}
    Buff0088224(int s, int d, int m) : BuffR(s, d, m) { id = 88224; }
    virtual ~Buff0088224() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ) {}
    int run(Ground* ground, int );

private:
    int count = 0;
};

#endif // BUFF0088224_H
