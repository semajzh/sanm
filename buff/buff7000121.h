#ifndef BUFF7000121_H
#define BUFF7000121_H
#include "buff.h"

class Buff7000121 : public BuffR
{
public:
    Buff7000121() {}
    Buff7000121(int s, int d, int m) : BuffR(s, d, m) { id = 7000121; }
    virtual ~Buff7000121() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int);
};

#endif // BUFF7000121_H
