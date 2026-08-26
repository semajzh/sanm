#ifndef BUFF2100121_H
#define BUFF2100121_H
#include "buff.h"

class Buff21001211 : public BuffR
{
public:
    Buff21001211() {}
    Buff21001211(int s, int d, int m) : BuffR(s, d, m) { id = 21001211; }
    virtual ~Buff21001211() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);
};

class Buff21001212 : public BuffR
{
public:
    Buff21001212() {}
    Buff21001212(int s, int d, int m) : BuffR(s, d, m) { id = 21001212; }
    virtual ~Buff21001212() {}

    virtual void run(Ground* );
};

class Buff21001213 : public BuffR
{
public:
    Buff21001213() {}
    Buff21001213(int s, int d, int m) : BuffR(s, d, m) { id = 21001213; }
    virtual ~Buff21001213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    bool check008(Ground* ground, int obj);
    int count = 0;
    float j11 = 0.0f;
};

#endif // BUFF2100121_H
