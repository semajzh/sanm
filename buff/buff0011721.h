#ifndef BUFF0011721_H
#define BUFF0011721_H
#include "buff.h"

class Buff0011721 : public BuffR
{
public:
    Buff0011721() {}
    Buff0011721(int s, int d, int m) : BuffR(s, d, m) { id = 11721; }
    virtual ~Buff0011721() {}

    virtual void run(Ground* ) {}
    bool run(Ground* , float &point );

private:
    int round = 0;
};

#endif // BUFF0011721_H
