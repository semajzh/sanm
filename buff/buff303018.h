#ifndef BUFF303018_H
#define BUFF303018_H
#include "buff.h"

class Buff303018 : public BuffR
{
public:
    Buff303018() {}
    Buff303018(int s, int d, int m) : BuffR(s, d, m) { id = 303018; }
    virtual ~Buff303018() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int);
};

#endif // BUFF303018_H
