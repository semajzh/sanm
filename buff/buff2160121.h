#ifndef BUFF2160121_H
#define BUFF2160121_H
#include "buff.h"

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

    virtual void enter(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
};

#endif // BUFF2160121_H
