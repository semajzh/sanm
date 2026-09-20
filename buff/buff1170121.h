#ifndef BUFF1170121_H
#define BUFF1170121_H
#include "buff.h"
#include <QVector>

class Buff1170121 : public BuffR
{
public:
    Buff1170121() {}
    Buff1170121(int s, int d, int m) : BuffR(s, d, m) { id = 1170121; }
    virtual ~Buff1170121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
    float run(Ground* ground, int type);

private:
    bool check11701212(Ground* ground, int obj, float& point);
    bool check117012(Ground* ground, int obj);
    void act(Ground* ground, int criteria);
    float i0 = 0.0f;
    float i1 = 0.0f;
    float l13 = 0.0f;
};

class Buff11701212 : public BuffR
{
public:
    Buff11701212() {}
    Buff11701212(int s, int d, int m) : BuffR(s, d, m) { id = 11701212; }
    virtual ~Buff11701212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    bool run(float& point);

private:
    QVector<float> k2;
};

class Buff11701213 : public BuffR
{
public:
    Buff11701213() {}
    Buff11701213(int s, int d, int m) : BuffR(s, d, m) { id = 11701213; }
    virtual ~Buff11701213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    inline int num() { return j13.size(); }

private:
    QVector<float> j13;
    QVector<float> j14;
};

#endif // BUFF1170121_H
