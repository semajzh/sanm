#ifndef BUFF6000121_H
#define BUFF6000121_H
#include "buff.h"

class Buff6000121 : public BuffR
{
public:
    Buff6000121() {}
    Buff6000121(int s, int d, int m) : BuffR(s, d, m) { id = 6000121; }
    virtual ~Buff6000121() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int obj, int m);

private:
    int count = 0;
    bool check6000121(Ground* , int , int , int );
};

#endif // BUFF6000121_H
