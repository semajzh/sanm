#ifndef BUFF4070121_H
#define BUFF4070121_H
#include "buff.h"

class Buff4070121 : public BuffR
{
public:
    Buff4070121() {}
    Buff4070121(int s, int d, int m) : BuffR(s, d, m) { id = 4070121; }
    virtual ~Buff4070121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
    void run(Ground* ground, int);

private:
    float l0 = 0.0f;
    float i2base = 0.0f;
    float i2[3] = {0};
    int round = 0;
    int bl = 0;
    void addbl(Ground* ground);
    void actbr(Ground* ground);
};

#endif // BUFF4070121_H
