#ifndef BUFF4011121_H
#define BUFF4011121_H
#include "buff.h"

class Buff4011121 : public BuffR
{
public:
    Buff4011121() {}
    Buff4011121(int s, int d, int m) : BuffR(s, d, m) { id = 4011121; }
    virtual ~Buff4011121() {}

    virtual void run(Ground* );
};

#endif // BUFF4011121_H
