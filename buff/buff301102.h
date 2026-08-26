#ifndef BUFF301102_H
#define BUFF301102_H
#include "buff.h"

class Buff301102 : public BuffR
{
public:
    Buff301102() {}
    Buff301102(int s, int d, int m) : BuffR(s, d, m) { id = 301102; }
    virtual ~Buff301102() {}

    virtual void run(Ground* ground);

private:
    int round = 0;
};

#endif // BUFF301102_H
