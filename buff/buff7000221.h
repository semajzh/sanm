#ifndef BUFF7000221_H
#define BUFF7000221_H
#include "buff.h"

class Buff7000221 : public BuffR
{
public:
    Buff7000221() {}
    Buff7000221(int s, int d, int m) : BuffR(s, d, m) { id = 7000221; }
    virtual ~Buff7000221() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int obj);
};

#endif // BUFF7000221_H
