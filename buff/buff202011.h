#ifndef BUFF202011_H
#define BUFF202011_H
#include "buff.h"

class Buff202011 : public BuffR
{
public:
    Buff202011() {}
    Buff202011(int s, int d, int m) : BuffR(s, d, m) { id = 202011; }
    virtual ~Buff202011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    int getMaxiIndex(Ground* ground, int obj);
    int index = -1;
    float maxi = 0.0f;
};

#endif // BUFF202011_H
