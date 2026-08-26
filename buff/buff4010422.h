#ifndef BUFF4010422_H
#define BUFF4010422_H
#include "buff.h"

class Buff4010422 : public BuffC
{
public:
    Buff4010422() {}
    Buff4010422(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010422; }
    virtual ~Buff4010422() {}
};

class Buff40104221 : public BuffC
{
public:
    Buff40104221() {}
    Buff40104221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40104221; }
    virtual ~Buff40104221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j17 = 0.0f;
};

#endif // BUFF4010422_H
