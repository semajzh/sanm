#ifndef BUFF0150221_H
#define BUFF0150221_H
#include "buff.h"

class Buff0150221 : public BuffR
{
public:
    Buff0150221() {}
    Buff0150221(int s, int d, int m) : BuffR(s, d, m) { id = 150221; }
    virtual ~Buff0150221() {}
};

#endif // BUFF0150221_H
