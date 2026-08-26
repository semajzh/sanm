#ifndef BUFF201072_H
#define BUFF201072_H
#include "buff.h"

class Buff201072 : public BuffR
{
public:
    Buff201072() {}
    Buff201072(int s, int d, int m) : BuffR(s, d, m) { id = 201072; }
    virtual ~Buff201072() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    int round = 0;
    int count = 0;
};

#endif // BUFF201072_H
