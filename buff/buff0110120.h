#ifndef BUFF0110120_H
#define BUFF0110120_H
#include "buff.h"

class Buff0110120 : public BuffR
{
public:
    Buff0110120() {}
    Buff0110120(int s, int d, int m) : BuffR(s, d, m) { id = 110120; }
    virtual ~Buff0110120() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* );
    void run(Ground* , int );

private:
    float j13 = 0.0f;
    int count = 0;
    int round = 0;
};

#endif // BUFF0110120_H
