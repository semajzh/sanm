#ifndef BUFF001740_H
#define BUFF001740_H
#include "buff.h"

class Buff001740 : public BuffR
{
public:
    Buff001740() {}
    Buff001740(int s, int d, int m) : BuffR(s, d, m) { id = 1740; }
    virtual ~Buff001740() {}

    virtual void run(Ground* );
};

class Buff001741 : public BuffR
{
public:
    Buff001741() {}
    Buff001741(int s, int d, int m) : BuffR(s, d, m) { id = 1741; }
    virtual ~Buff001741() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k5 = 0.0f;
};

#endif // BUFF001740_H
