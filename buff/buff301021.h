#ifndef BUFF301021_H
#define BUFF301021_H
#include "buff.h"

class Buff301021 : public BuffR
{
public:
    Buff301021() {}
    Buff301021(int s, int d, int m) : BuffR(s, d, m) { id = 301021; }
    virtual ~Buff301021() {}

    virtual void run(Ground* ) {}
    bool run(Ground* ground, int obj, int exid);

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF301021_H
