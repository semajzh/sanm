#ifndef BUFF2160121_H
#define BUFF2160121_H
#include "buff.h"
#include <QVector>

class Buff21601211 : public BuffR
{
public:
    Buff21601211() {}
    Buff21601211(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 21601211; }
    virtual ~Buff21601211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    bool run(Ground* ground, int& );

private:
    float l9 = 0.0f;
    float l11 = 0.0f;
};

class Buff21601212 : public BuffR
{
public:
    Buff21601212() {}
    Buff21601212(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 21601212; }
    virtual ~Buff21601212() {}

    virtual void run(Ground* ground);

private:
    bool check216012(Ground* ground, int obj);
};

class Buff21601213 : public BuffR
{
public:
    Buff21601213() {}
    Buff21601213(int s, int d, int m) : BuffR(s, d, m) { id = 21601213; }
    virtual ~Buff21601213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);
    void run(Ground* ground, int );

private:
    bool check216011(Ground* ground, int obj);
    bool check2160122(Ground* ground, int obj);
    int count = 0;
    QVector<float> l0;
    QVector<float> j13;
    QVector<float> j14;
};

#endif // BUFF2160121_H
