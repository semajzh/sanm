#ifndef BUFF202022_H
#define BUFF202022_H
#include "buff.h"

class Buff202022 : public BuffR
{
public:
    Buff202022() {}
    Buff202022(int s, int d, int m) : BuffR(s, d, m) { id = 202022; }
    virtual ~Buff202022() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    int round = 0;
};

#endif // BUFF202022_H
