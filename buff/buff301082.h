#ifndef BUFF301082_H
#define BUFF301082_H
#include "buff.h"

class Buff301082 : public BuffR
{
public:
    Buff301082() {}
    Buff301082(int s, int d, int m) : BuffR(s, d, m) { id = 301082; }
    virtual ~Buff301082() {}

    virtual void run(Ground* ground);
};

#endif // BUFF301082_H
