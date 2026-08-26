#ifndef BUFF0080222_H
#define BUFF0080222_H
#include "buff.h"

class Buff0080222 : public BuffR
{
public:
    Buff0080222() {}
    Buff0080222(int s, int d, int m) : BuffR(s, d, m) { id = 80222; }
    virtual ~Buff0080222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ) {}
    bool run(Ground* , int );

private:
    int count = 0;
};

#endif // BUFF0080222_H
