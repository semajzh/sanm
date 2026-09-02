#ifndef BUFF0016120_H
#define BUFF0016120_H
#include "buff.h"

class Buff0016120 : public BuffR
{
public:
    Buff0016120() {}
    Buff0016120(int s, int d, int m) : BuffR(s, d, m) { id = 16120; }
    virtual ~Buff0016120() {}

    virtual void run(Ground* );

private:
    int round = 0;
};

#endif // BUFF0016120_H
