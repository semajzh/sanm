#ifndef BUFF2011020_H
#define BUFF2011020_H
#include "buff.h"

class Buff2011020 : public BuffR
{
public:
    Buff2011020() {}
    Buff2011020(int s, int d, int m) : BuffR(s, d, m) { id = 2011020; }
    virtual ~Buff2011020() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    bool check002(Ground* ground, int obj);
    int round = 0;
    int count = 0;
};

#endif // BUFF2011020_H
