#ifndef BUFF4090121_H
#define BUFF4090121_H
#include "buff.h"

class Buff4090121 : public BuffR
{
public:
    Buff4090121() {}
    Buff4090121(int s, int d, int m) : BuffR(s, d, m) { id = 4090121; }
    virtual ~Buff4090121() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

class Buff40901212 : public BuffR
{
public:
    Buff40901212() {}
    Buff40901212(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 40901212; }
    virtual ~Buff40901212() {}

    virtual void enter(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    QVector<int> selectObj(Ground* ground);
    float actpoint = 0.0f;
};

class Buff40901213 : public BuffR
{
public:
    Buff40901213() {}
    Buff40901213(int s, int d, int m) : BuffR(s, d, m) { id = 40901213; }
    virtual ~Buff40901213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k0 = 0.0f;
    float l0 = 0.0f;
};

#endif // BUFF4090121_H
