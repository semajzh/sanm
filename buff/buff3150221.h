#ifndef BUFF3150221_H
#define BUFF3150221_H
#include "buff.h"

class Buff3150221 : public BuffR
{
public:
    Buff3150221() {}
    Buff3150221(int s, int d, int m) : BuffR(s, d, m) { id = 3150221; }
    virtual ~Buff3150221() {}
};

#endif // BUFF3150221_H
