#ifndef BUFF1090121_H
#define BUFF1090121_H
#include "buff.h"

class Buff10901211 : public BuffR
{
public:
    Buff10901211() {}
    Buff10901211(int s, int d, int m) : BuffR(s, d, m) { id = 10901211; }
    virtual ~Buff10901211() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

class Buff10901212 : public BuffR
{
public:
    Buff10901212() {}
    Buff10901212(int s, int d, int m) : BuffR(s, d, m) { id = 10901212; }
    virtual ~Buff10901212() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

class Buff10901213 : public BuffR
{
public:
    Buff10901213() {}
    Buff10901213(int s, int d, int m) : BuffR(s, d, m) { id = 10901213; }
    virtual ~Buff10901213() {}

    virtual void run(Ground* );
};

class Buff10901214 : public BuffR
{
public:
    Buff10901214() {}
    Buff10901214(int s, int d, int m) : BuffR(s, d, m) { id = 10901214; }
    virtual ~Buff10901214() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    bool check4110121(Ground* ground);
    float i1 = 0.0f;
};

class Buff10901215 : public BuffR
{
public:
    Buff10901215() {}
    Buff10901215(int s, int d, int m) : BuffR(s, d, m) { id = 10901215; }
    virtual ~Buff10901215() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float i1 = 0.0f;
};

#endif // BUFF1090121_H
