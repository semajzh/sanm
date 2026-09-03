#ifndef BUFF0011024_H
#define BUFF0011024_H
#include "buff.h"

class Buff0011024 : public BuffR
{
public:
    Buff0011024() {}
    Buff0011024(int s, int d, int m) : BuffR(s, d, m) { id = 11024; }
    virtual ~Buff0011024() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
};

#endif // BUFF0011024_H
