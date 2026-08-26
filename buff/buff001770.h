#ifndef BUFF001770_H
#define BUFF001770_H
#include "buff.h"

class Buff001770 : public BuffR
{
public:
    Buff001770() {}
    Buff001770(int s, int d, int m) : BuffR(s, d, m) { id = 1770; }
    virtual ~Buff001770() {}

    virtual void run(Ground* );
};

class Buff001771 : public BuffR
{
public:
    Buff001771() {}
    Buff001771(int s, int d, int m) : BuffR(s, d, m) { id = 1771; }
    virtual ~Buff001771() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float j13 = 0.0f;
};

#endif // BUFF001770_H
