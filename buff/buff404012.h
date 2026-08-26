#ifndef BUFF404012_H
#define BUFF404012_H
#include "buff.h"

class Buff404012 : public BuffR
{
public:
    Buff404012() {}
    Buff404012(int s, int d, int m) : BuffR(s, d, m) { id = 404012; }
    virtual ~Buff404012() {}
};

class Buff4040122 : public BuffR
{
public:
    Buff4040122() {}
    Buff4040122(int s, int d, int m) : BuffR(s, d, m) { id = 4040122; }
    virtual ~Buff4040122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float k0 = 0.0f;
};

#endif // BUFF404012_H
