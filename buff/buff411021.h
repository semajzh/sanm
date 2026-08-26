#ifndef BUFF411021_H
#define BUFF411021_H
#include "buff.h"

class Buff411021 : public BuffR
{
public:
    Buff411021() {}
    Buff411021(int s, int d, int m) : BuffR(s, d, m) { id = 411021; }
    virtual ~Buff411021() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int obj);

private:
    bool check020(Ground* ground, int obj);
};

#endif // BUFF411021_H
