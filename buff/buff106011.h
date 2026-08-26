#ifndef BUFF106011_H
#define BUFF106011_H
#include "buff.h"

class Buff106011 : public BuffR
{
public:
    Buff106011() {}
    Buff106011(int s, int d, int m) : BuffR(s, d, m) { id = 106011; }
    virtual ~Buff106011() {}
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    int count = 0;
    int count2223 = 0;
    float j6 = 0.0f;
};

#endif // BUFF106011_H
