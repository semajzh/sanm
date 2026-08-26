#ifndef BUFF303012_H
#define BUFF303012_H
#include "buff.h"

class Buff303012 : public BuffR
{
public:
    Buff303012() {}
    Buff303012(int s, int d, int m) : BuffR(s, d, m) { id = 303012; }
    virtual ~Buff303012() {}
};

class Buff3030122 : public BuffR
{
public:
    Buff3030122() {}
    Buff3030122(int s, int d, int m) : BuffR(s, d, m) { id = 3030122; }
    virtual ~Buff3030122() {}

    virtual void run(Ground* ) {}
    float run(Ground* , int );
    void run(Ground* , float );

private:
    int count1 = 0;
    int count2 = 0;
};

#endif // BUFF303012_H
