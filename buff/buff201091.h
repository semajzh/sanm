#ifndef BUFF201091_H
#define BUFF201091_H
#include "buff.h"

class Buff201091 : public BuffR
{
public:
    Buff201091() {}
    Buff201091(int s, int d, int m) : BuffR(s, d, m) { id = 201091; }
    virtual ~Buff201091() {}
    virtual void run(Ground* );

private:
    int count = 0;
};

class Buff2010912 : public BuffC
{
public:
    Buff2010912() {}
    Buff2010912(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2010912; }
    virtual ~Buff2010912() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j6 = 0.0f;
    float k5 = 0.0f;
};

#endif // BUFF201091_H
