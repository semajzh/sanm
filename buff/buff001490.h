#ifndef BUFF001490_H
#define BUFF001490_H
#include "buff.h"

class Buff001490 : public BuffR
{
public:
    Buff001490() {}
    Buff001490(int s, int d, int m) : BuffR(s, d, m) { id = 1490; }
    virtual ~Buff001490() {}

    virtual void run(Ground* );
};

class Buff001491 : public BuffR
{
public:
    Buff001491() {}
    Buff001491(int s, int d, int m) : BuffR(s, d, m) { id = 1491; }
    virtual ~Buff001491() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF001490_H
