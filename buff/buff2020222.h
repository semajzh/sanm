#ifndef BUFF2091222_H
#define BUFF2091222_H
#include "buff.h"

class Buff2020222 : public BuffR
{
public:
    Buff2020222() {}
    Buff2020222(int s, int d, int m) : BuffR(s, d, m) { id = 2020222; }
    virtual ~Buff2020222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    int count = 1;
};

#endif // BUFF2091222_H
