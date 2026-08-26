#ifndef BUFF009020_H
#define BUFF009020_H
#include "buff.h"

class Buff009020 : public BuffR
{
public:
    Buff009020() {}
    Buff009020(int s, int d, int m) : BuffR(s, d, m) { id = 9020; }
    virtual ~Buff009020() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , int );

private:
    int round = 0;
};

#endif // BUFF009020_H
