#ifndef BUFF201101_H
#define BUFF201101_H
#include "buff.h"

class Buff201101 : public BuffR
{
public:
    Buff201101() {}
    Buff201101(int s, int d, int m) : BuffR(s, d, m) { id = 201101; }
    virtual ~Buff201101() {}
    virtual void run(Ground* );
};

#endif // BUFF201101_H
