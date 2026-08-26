#ifndef BUFFS600_H
#define BUFFS600_H
#include "buff.h"

class BuffS600A : public BuffR
{
public:
    BuffS600A() {}
    BuffS600A(int s, int d, int m) : BuffR(s, d, m) { id = 600; }
    virtual ~BuffS600A() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int pos);
};

class BuffS600B : public BuffR
{
public:
    BuffS600B() {}
    BuffS600B(int s, int d, int m) : BuffR(s, d, m) { id = -600; }
    virtual ~BuffS600B() {}

    virtual void run(Ground* );

private:
    int count = 0;
};

#endif // BUFFS600_H
