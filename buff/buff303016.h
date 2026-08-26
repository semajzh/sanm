#ifndef BUFF303016_H
#define BUFF303016_H
#include "buff.h"

class Buff303016 : public BuffR
{
public:
    Buff303016() {}
    Buff303016(int s, int d, int m) : BuffR(s, d, m) { id = 303016; }
    virtual ~Buff303016() {}

    virtual void run(Ground* );
};

#endif // BUFF303016_H
