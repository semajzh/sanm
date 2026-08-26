#ifndef BUFF4040121_H
#define BUFF4040121_H
#include "buff.h"

class Buff4040121 : public BuffR
{
public:
    Buff4040121() {}
    Buff4040121(int s, int d, int m) : BuffR(s, d, m) { id = 4040121; }
    virtual ~Buff4040121() {}

    virtual void run(Ground* ) {}

    bool check(Ground* ground, int current, int method);
    bool run(Ground* ground, int current, float &point);

public:
    bool check404012(Ground* ground);
    int count = 10;
};

#endif // BUFF4040121_H
