#ifndef BUFF401037_H
#define BUFF401037_H
#include "buff.h"

class Buff401037 : public BuffR
{
public:
    Buff401037() {}
    Buff401037(int s, int d, int m) : BuffR(s, d, m) { id = 401037; }
    virtual ~Buff401037() {}

    virtual void run(Ground* ) {}
    virtual float run(Ground* ground, int);

private:
    bool check005(Ground* ground, int obj);
};

#endif // BUFF401037_H
