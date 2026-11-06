#ifndef BUFF4180121_H
#define BUFF4180121_H
#include "buff.h"

class Buff4180121 : public BuffR
{
public:
    Buff4180121() {}
    Buff4180121(int s, int d, int m) : BuffR(s, d, m) { id = 4180121; }
    virtual ~Buff4180121() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int n);

private:
    bool checkMethod(Ground* ground, int m);
    int round = 0;
};

#endif
