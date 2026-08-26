#ifndef BUFF4130220_H
#define BUFF4130220_H
#include "buff.h"

class Buff4130220 : public BuffR
{
public:
    Buff4130220() {}
    Buff4130220(int s, int d, int m) : BuffR(s, d, m) { id = 4130220; }
    virtual ~Buff4130220() {}

    virtual void run(Ground* );

private:
    bool check413021(Ground* ground);
};

class Buff41302202 : public BuffC
{
public:
    Buff41302202() {}
    Buff41302202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 41302202; }
    virtual ~Buff41302202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check4110121(Ground* ground);
    float i[4] = {0};
    float l0 = 0.0f;
};

class Buff41302203 : public BuffC
{
public:
    Buff41302203() {}
    Buff41302203(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 41302203; }
    virtual ~Buff41302203() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float l0 = 0.0f;
};

#endif // BUFF4130220_H
