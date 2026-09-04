#ifndef BUFF0140121_H
#define BUFF0140121_H
#include "buff.h"

class Buff0140121 : public BuffR
{
public:
    Buff0140121() {}
    Buff0140121(int s, int d, int m) : BuffR(s, d, m) { id = 140121; }
    virtual ~Buff0140121() {}

    virtual void run(Ground* );
    void run(Ground* , int);

private:
    int check01401213(Ground* ground, int obj);
    int count = 0;
};

class Buff01401212 : public BuffR
{
public:
    Buff01401212() {}
    Buff01401212(int s, int d, int m) : BuffR(s, d, m) { id = 1401212; }
    virtual ~Buff01401212() {}

    virtual void run(Ground* );

private:
    bool check0140121(Ground* ground, int obj);
};

class Buff01401213 : public BuffC
{
public:
    Buff01401213() {}
    Buff01401213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1401213; }
    virtual ~Buff01401213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    inline int num() { return count; }

private:
    int count = 0;
    float i2 = 0.0f;
};

#endif // BUFF0140121_H
