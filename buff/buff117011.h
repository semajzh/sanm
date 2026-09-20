#ifndef BUFF117011_H
#define BUFF117011_H
#include "buff.h"

class Buff117011 : public BuffR
{
public:
    Buff117011() {}
    Buff117011(int s, int d, int m) : BuffR(s, d, m) { id = 117011; }
    virtual ~Buff117011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* );

private:
    int check1170121(Ground* ground);
    int check11701213(Ground* ground, int obj);
    float l13 = 0.0f;
};

#endif // BUFF117011_H
