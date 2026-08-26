#ifndef BUFF0104021_H
#define BUFF0104021_H
#include "buff.h"

class Buff0104021 : public BuffR
{
public:
    Buff0104021() {}
    Buff0104021(int s, int d, int m) : BuffR(s, d, m) { id = 104021; }
    virtual ~Buff0104021() {}

    virtual void run(Ground* );
    void run(Ground* , int );

private:
    int count = 0;
    int round = 0;
};

class Buff01040212 : public BuffR
{
public:
    Buff01040212() {}
    Buff01040212(int s, int d, int m) : BuffR(s, d, m) { id = 1040212; }
    virtual ~Buff01040212() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

class Buff01040213 : public BuffR
{
public:
    Buff01040213() {}
    Buff01040213(int s, int d, int m) : BuffR(s, d, m) { id = 1040213; }
    virtual ~Buff01040213() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k5 = 0.0f;
    float j6 = 0.0f;
};

#endif // BUFF0104021_H
