#ifndef BUFF001390_H
#define BUFF001390_H
#include "buff.h"

class Buff001390 : public BuffR
{
public:
    Buff001390() {}
    Buff001390(int s, int d, int m) : BuffR(s, d, m) { id = 1390; }
    virtual ~Buff001390() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l2 = 0.0f;
};

#endif // BUFF001390_H
