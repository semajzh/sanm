#ifndef BUFF4010321_H
#define BUFF4010321_H
#include "buff.h"

class Buff4010321 : public BuffR
{
public:
    Buff4010321() {}
    Buff4010321(int s, int d, int m) : BuffR(s, d, m) { id = 4010321; }
    virtual ~Buff4010321() {}

    virtual void run(Ground* );
};

class Buff40103212 : public BuffC
{
public:
    Buff40103212() {}
    Buff40103212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40103212; }
    virtual ~Buff40103212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF4010321_H
