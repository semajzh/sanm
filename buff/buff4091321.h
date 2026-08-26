#ifndef BUFF4091321_H
#define BUFF4091321_H
#include "buff.h"

class Buff4091321 : public BuffC
{
public:
    Buff4091321() {}
    Buff4091321(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4091321; }
    virtual ~Buff4091321() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    virtual bool run(Ground* ground, int method);

private:
    float j0 = 0.0f;
    float j2 = 0.0f;
    int method = 0;
    int round = 0;
};

#endif // BUFF4091321_H
