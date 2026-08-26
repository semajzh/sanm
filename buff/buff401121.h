#ifndef BUFF401121_H
#define BUFF401121_H
#include "buff.h"

class Buff401121 : public BuffR
{
public:
    Buff401121() {}
    Buff401121(int s, int d, int m) : BuffR(s, d, m) { id = 401121; }
    virtual ~Buff401121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k5 = 0.0f;
    float j13 = 0.0f;
};

#endif // BUFF401121_H
