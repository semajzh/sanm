#ifndef BUFF4091121_H
#define BUFF4091121_H
#include "buff.h"

class Buff4091121 : public BuffR
{
public:
    Buff4091121() {}
    Buff4091121(int s, int d, int m) : BuffR(s, d, m) { id = 4091121; }
    virtual ~Buff4091121() {}

    virtual void run(Ground* );
    void hlo(Ground* ground, int point);
};

#endif // BUFF4091121_H
