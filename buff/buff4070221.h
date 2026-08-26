#ifndef BUFF4070221_H
#define BUFF4070221_H
#include "buff.h"

class Buff4070221 : public BuffR
{
public:
    Buff4070221() {}
    Buff4070221(int s, int d, int m) : BuffR(s, d, m) { id = 4070221; }
    virtual ~Buff4070221() {}
    virtual void run(Ground* ) {}
    virtual void run(Ground* ground, int n);
    void hlo(Ground* ground, int obj, float point);

private:
    float jl = 0.0f;
    int round = 0;
    bool check005(Ground* ground, int obj);
};

#endif // BUFF4070221_H
