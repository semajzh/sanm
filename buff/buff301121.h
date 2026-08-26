#ifndef BUFF301121_H
#define BUFF301121_H
#include "buff.h"

class Buff301121 : public BuffR
{
public:
    Buff301121() {}
    Buff301121(int s, int d, int m) : BuffR(s, d, m) { id = 301121; }
    virtual ~Buff301121() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 1;
    float l0 = 0.0f;
};

#endif // BUFF301121_H
