#ifndef BUFF2160222_H
#define BUFF2160222_H
#include "buff.h"

class Buff21602221 : public BuffC
{
public:
    Buff21602221() {}
    Buff21602221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 21602221; }
    virtual ~Buff21602221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j7 = 0.0f;
};

class Buff21602222 : public BuffR
{
public:
    Buff21602222() {}
    Buff21602222(int s, int d, int m) : BuffR(s, d, m) { id = 21602222; }
    virtual ~Buff21602222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k5 = 0.0f;
};

class Buff21602223 : public BuffR
{
public:
    Buff21602223() {}
    Buff21602223(int s, int d, int m) : BuffR(s, d, m) { id = 21602223; }
    virtual ~Buff21602223() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j11 = 0.0f;
};

class Buff21602224 : public BuffR
{
public:
    Buff21602224() {}
    Buff21602224(int s, int d, int m) : BuffR(s, d, m) { id = 21602224; }
    virtual ~Buff21602224() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j6 = 0.0f;
};

#endif // BUFF2160222_H
