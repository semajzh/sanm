#ifndef BUFF7000321_H
#define BUFF7000321_H
#include "buff.h"

class Buff7000321 : public BuffR
{
public:
    Buff7000321() {}
    Buff7000321(int s, int d, int m) : BuffR(s, d, m) { id = 7000321; }
    virtual ~Buff7000321() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int obj);
};

#endif // BUFF7000321_H
