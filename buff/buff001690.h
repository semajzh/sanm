#ifndef BUFF001690_H
#define BUFF001690_H
#include "buff.h"

class Buff001690 : public BuffR
{
public:
    Buff001690() {}
    Buff001690(int s, int d, int m) : BuffR(s, d, m) { id = 1690; }
    virtual ~Buff001690() {}

    virtual void run(Ground* );
};

class Buff001691 : public BuffR
{
public:
    Buff001691() {}
    Buff001691(int s, int d, int m) : BuffR(s, d, m) { id = 1691; }
    virtual ~Buff001691() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k3 = 0.0f;
};

#endif // BUFF001690_H
