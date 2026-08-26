#ifndef BUFF001630_H
#define BUFF001630_H
#include "buff.h"

class Buff001630 : public BuffR
{
public:
    Buff001630() {}
    Buff001630(int s, int d, int m) : BuffR(s, d, m) { id = 1630; }
    virtual ~Buff001630() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ground);

private:
    float j2 = 0.0;
};

#endif // BUFF001630_H
